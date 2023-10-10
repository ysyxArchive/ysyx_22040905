#include "../../all.h"
#include <assert.h>
#include <stdio.h>
#include <elf.h>

static char *elf = NULL;
char strtab[32768];
struct func{
  uint64_t begin;
  uint64_t end;
  char * str;
}func[32768];
int func_num=0;

void load_elf(char *s){
  elf=s;
  Elf64_Ehdr ehdr[1];
  Elf64_Shdr shdr[2048];
  Elf64_Sym symtab[32768];
  if(elf==NULL){
    printf("No elf is given.\n");
    return;
  }
  //printf("%s\n\n\n",elf);
  FILE *fp = fopen(elf, "rb");
  if(fp==NULL){
    printf("Can not open %s",elf);
    assert(0);
  }

  fseek(fp,0,SEEK_SET);
  int ret=fread(ehdr, sizeof(Elf64_Ehdr), 1, fp);
  assert(ret!=0);
  int count = ehdr->e_shnum;    //节头表数量

  fseek(fp, ehdr->e_shoff, SEEK_SET);
  ret=fread(shdr, sizeof(Elf64_Shdr), count, fp);
  assert(ret!=0);
  int flag=0,num=0;
  for(int i = 0; i < count; ++i) {
    if(shdr[i].sh_type==SHT_STRTAB&&!flag){
      fseek(fp,shdr[i].sh_offset,SEEK_SET);
      ret=fread(strtab, 1, shdr[i].sh_size, fp);
      assert(ret!=0);
      flag=1;
    }
    else if(shdr[i].sh_type==SHT_SYMTAB){
      fseek(fp,shdr[i].sh_offset,SEEK_SET);
      num=shdr[i].sh_size/shdr[i].sh_entsize;
      ret=fread(symtab,shdr[i].sh_entsize,num, fp);
      assert(ret!=0); 
    }
    for(int j=0;j<num;j++){
          if(ELF64_ST_TYPE(symtab[j].st_info)==STT_FUNC){
            func[func_num].begin=symtab[j].st_value;
            func[func_num].end=symtab[j].st_value+symtab[j].st_size;
            func[func_num++].str=strtab+symtab[j].st_name;
          }
    }
  }
}
void ftrace_add(uint64_t addr,uint64_t dnpc,int d){
  //printf("\n\n1\n\n");
  FILE *fp;
  fp=fopen("build/ftrace.txt", "a");
  int flag=1;
  for(int i=0;i<func_num;i++){
    if(dnpc<func[i].begin||dnpc>=func[i].end)continue;
    flag=0;
    if(d) fprintf(fp,"0x%08lx:\tcall [%s@0x%08lx]\n",addr,func[i].str,dnpc);
    else fprintf(fp,"0x%08lx:\tret [%s]\n",addr,func[i].str);
    break;
  }
  if(flag){
    fprintf(fp,"0x%08lx:\t???\n",addr);
    for(int i=0;i<func_num;i++){
      fprintf(fp,"%s\t%lx\t%lx\n",func[i].str,func[i].begin,func[i].end);
    }
  }
  fclose(fp);
}