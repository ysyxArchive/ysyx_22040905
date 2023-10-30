#include <isa.h>
#include <memory/paddr.h>
#include <cpu/difftest.h>

void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm(const char *triple);

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ASNI_FMT("ON", ASNI_FG_GREEN), ASNI_FMT("OFF", ASNI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NEMU!\n", ASNI_FMT(str(__GUEST_ISA__), ASNI_FG_YELLOW ASNI_BG_RED));
  printf("For help, type \"help\"\n");
  //Log("Exercise: Please remove me in the source code and compile NEMU again.");
  //assert(0);
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>
#include <elf.h>
void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;
static char *elf[100];

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }
  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}
//elf
int elf_num=0;
#ifdef CONFIG_FTRACE
#define func_mnum 131072
#define shdr_num 2048
#define sym_num 32768
#define str_num 32768
#define str_len 256
static struct fun{
  uint64_t begin;
  uint64_t end;
  char str[str_len];
}func[100000];
int func_num=0;

static void load_elf(){
  if(elf[0]==NULL){
    Log("No elf is given.");
    return;
  }
  for(int l=0;l<elf_num;l++){
    Elf64_Ehdr ehdr[1];
    Elf64_Shdr shdr[shdr_num];
    Elf64_Sym symtab[sym_num];
    char strtab[str_num];
    FILE *fp = fopen(elf[l], "rb");
    Assert(fp, "Can not open '%s'",elf[l]);
    fseek(fp,0,SEEK_SET);
    int ret=fread(ehdr, sizeof(Elf64_Ehdr), 1, fp);
    assert(ret!=0);
    assert(*(uint32_t *)ehdr->e_ident == 0x464c457f);
    int count = ehdr->e_shnum;    //节头表数量
    assert(count<=shdr_num);
    fseek(fp, ehdr->e_shoff, SEEK_SET);
    ret=fread(shdr, sizeof(Elf64_Shdr), count, fp);
    assert(ret!=0);
    int flag=0,num=0;
    for(int i = 0; i < count; ++i) {
      if(shdr[i].sh_type==SHT_STRTAB&&!flag){
        fseek(fp,shdr[i].sh_offset,SEEK_SET);
        assert(shdr[i].sh_size<=str_num);
        ret=fread(strtab, 1, shdr[i].sh_size, fp);
        assert(ret!=0);
        flag=1;
      }
      else if(shdr[i].sh_type==SHT_SYMTAB){
        fseek(fp,shdr[i].sh_offset,SEEK_SET);
        num=shdr[i].sh_size/shdr[i].sh_entsize;
        assert(num<=sym_num);
        ret=fread(symtab,shdr[i].sh_entsize,num, fp);
        assert(ret!=0); 
      }
    }
    fclose(fp);
    for(int j=0;j<num;j++){
      if(ELF64_ST_TYPE(symtab[j].st_info)==STT_FUNC){
        func[func_num].begin=symtab[j].st_value;
        func[func_num].end=symtab[j].st_value+symtab[j].st_size;
        assert(strlen(strtab+symtab[j].st_name)<=str_len);
        strcpy(func[func_num++].str,strtab+symtab[j].st_name);
        assert(func_num<=func_mnum);
        //printf("%d %s\n",func_num-1,func[func_num-1].str);
      }
    }

    //printf("####%s\n",func[0].str);
  }
  //for(int i=0;i<func_num;i++)
  //  printf("%d %s\n",i,func[i].str);
}
void ftrace_add(int64_t addr,int64_t dnpc,int d){
  FILE *fp;
  fp=fopen("./build/nemu-ftrace.txt", "a");
  int flag=1;
  for(int i=0;i<func_num;i++){
    if(dnpc<func[i].begin||dnpc>=func[i].end)continue;
    flag=0;
    if(d) fprintf(fp,"0x%08lx:\tcall [%s@0x%08lx]\n",addr,func[i].str,dnpc);
    else fprintf(fp,"0x%08lx:\tret [%s]\n",addr,func[i].str);
    break;
  }
  if(flag){
    fprintf(fp,"???\n");
  }
  fclose(fp);
}
#else
static void load_elf(){}
void ftrace_add(int64_t addr,int64_t dnpc,int d){}
#endif
static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {"elf"      , required_argument, NULL, 'e'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhe:l:d:p:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 'e': elf[elf_num++] = optarg; break;  
      case 1: img_file = optarg; return optind - 1;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  /* Initialize differential testing. */

  init_difftest(diff_so_file, img_size, difftest_port);
  
  /* Initialize the simple debugger. */
  init_sdb();

  /* Initialize the iringbuf. */
  init_iringbuf();

  /* Initialize the ftrace. */ 
  load_elf();

  IFDEF(CONFIG_ITRACE, init_disasm(
    MUXDEF(CONFIG_ISA_x86,     "i686",
    MUXDEF(CONFIG_ISA_mips32,  "mipsel",
    MUXDEF(CONFIG_ISA_riscv32, "riscv32",
    MUXDEF(CONFIG_ISA_riscv64, "riscv64", "bad")))) "-pc-linux-gnu"
  ));

  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif
