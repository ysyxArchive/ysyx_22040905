#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <math.h>
#include <memory/vaddr.h>
static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

static uint64_t string_to_uint64_t(char *str){
  int len=strlen(str);
  uint64_t ans=0;
  for(int i=0;i<len;i++)
    ans+= pow(10,len-i-1)*(str[i]-'0');
  return ans;
}
static uint64_t string_h_to_d(char *str){
  int len=strlen(str);
  uint64_t ans=0;
  if(str[0]=='0'&&str[1]=='x'){
    for(int i=2;i<len;i++){
      if(str[i]>='0'&&str[i]<='9')
        ans+=pow(16,len-i-3)*(str[i]-'0');
      else if(str[i]>='A'&&str[i]<='F')
        ans+=pow(16,len-i-3)*(str[i]-'A'+10);
    }
  }
  return 0;
}
/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

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
	   	num=string_to_uint64_t(args);
	}
  cpu_exec(num);
	return 0;
}

static int cmd_info(char *args){
  if(strcmp(args,"r")==0) isa_reg_display();
  return 0;
}

static int cmd_x(char *args){
  char *len=strtok(args," ");
  char *addr=len+strlen(len)+1;
  printf("%s\n%s\n",len,addr);
  printf("%lx",vaddr_read(string_h_to_d(addr),string_to_uint64_t(len)));
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
  { "si","Step through",cmd_si},
  { "info","Print program status",cmd_info},
  { "x","Scan memory",cmd_x},
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

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
