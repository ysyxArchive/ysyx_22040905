#include <readline/readline.h>
#include <readline/history.h>
#include <math.h>

static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}

static int cmd_q(char *args) {
  return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args){
	uint64_t num=1;
	if(args!=NULL){
    sscanf(args,"%ld",&num);
	}
    cpu_exec(num);
	return 0;
}

static int cmd_info(char *args){
  if(strcmp(args,"r")==0) isa_reg_display();
  else if(strcmp(args,"w")==0){
    info_wp();
  }
  return 0;
}

static int cmd_w(char *args){
  set_wp(args);
  return 0;
}
static int cmd_d(char *args){
  del_wp(atoi(args)); 
  return 0;
}

static int cmd_x(char *args){
  int len;
  uint64_t addr;
  char str[10000];
  sscanf(args,"%d %s",&len,str);
  bool success=true;
  addr=expr(str,&success);
  if(!success)assert(0);
  for(int i=0;i<4*len;i+=4){
  printf("0x%lx:\t\t0x%08lx\n",addr+i,vaddr_read(addr+i,4));
  }
  return 0;
}
static int cmd_p(char *args){
  bool *success=(bool*)true;
  int val=expr(args,success);
  if(success)
    printf("%u\n",val);
  else assert(0);
  return 0;
}
static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si","Step execute once",cmd_si},
  { "info","Print program status",cmd_info},
  { "x","Scan memory",cmd_x},
  { "p","Expression evaluation",cmd_p},
  { "w","Set watchpoint",cmd_w},
  { "d","Delete watchpoint",cmd_d},
  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}