#include <readline/readline.h>
#include <readline/history.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <regex.h>
#include <assert.h>
#include "../../all.h"

void init_regex();
void init_wp_pool();

static char *rl_gets()
{
  static char *line_read = NULL;

  if (line_read)
  {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read)
  {
    add_history(line_read);
  }

  return line_read;
}
static int cmd_help(char *args);

static int cmd_c(char *args)
{
  execute(-1);
  //if(state!=NPC_RUNNING)return -1;
  return 0;
}

static int cmd_q(char *args)
{
  state=NPC_QUIT;
  return -1;
}

static int cmd_si(char *args)
{
  uint64_t num = 1;
  if (args != NULL)
  {
    sscanf(args, "%ld", &num);
  }
  if(state!=NPC_RUNNING)return -1;
  for(int i=0;i<num;i++){
    execute(1);
  }
  return 0;
}

static int cmd_info(char *args)
{
  if (strcmp(args, "r") == 0){
    dump_gpr();
    dump_csr();
  }
  else if (strcmp(args, "w") == 0)
  {
    info_wp();
  }
  return 0;
}

static int cmd_w(char *args)
{
  set_wp(args);
  return 0;
}
static int cmd_d(char *args)
{
  del_wp(atoi(args));
  return 0;
}

static int cmd_x(char *args)
{
  int len;
  uint64_t addr;
  char str[10000];
  sscanf(args, "%d %s", &len, str);
  bool success = true;
  //printf("%s\n",str);
  addr = expr(str, &success);
  //printf("%lx %d\n",addr,len);
  if (!success) assert(0);
  //printf("%lx %d\n",addr,len);
  for (int i = 0; i < 8 * len; i += 8)
  {
    printf("0x%lx:\t\t0x%016lx\n", addr + i, pmem_read(addr + i, 8));
  }
  return 0;
}
static int cmd_p(char *args)
{
  bool *success = (bool *)true;
  int val = expr(args, success);
  if (success)
    printf("%u\n", val);
  else
    assert(0);
  return 0;
}
static struct
{
  const char *name;
  const char *description;
  int (*handler)(char *);
} cmd_table[] = {
    {"help", "Display informations about all supported commands", cmd_help},
    {"c", "Continue the execution of the program", cmd_c},
    {"q", "Exit NEMU", cmd_q},
    {"si", "Step execute once", cmd_si},
    {"info", "Print program status", cmd_info},
    {"x", "Scan memory", cmd_x},
    {"p", "Expression evaluation", cmd_p},
    {"w", "Set watchpoint", cmd_w},
    {"d", "Delete watchpoint", cmd_d},
    /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args)
{
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL)
  {
    /* no argument given */
    for (i = 0; i < NR_CMD; i++)
    {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else
  {
    for (i = 0; i < NR_CMD; i++)
    {
      if (strcmp(arg, cmd_table[i].name) == 0)
      {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}
void sdb_mainloop()
{
  for (char *str; (str = rl_gets()) != NULL;)
  {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL)
    {
      continue;
    }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end)
    {
      args = NULL;
    }

    int i;
    for (i = 0; i < NR_CMD; i++)
    {
      if (strcmp(cmd, cmd_table[i].name) == 0)
      {
        if (cmd_table[i].handler(args) < 0)
        {
          return;
        }
        break;
      }
    }

    if (i == NR_CMD)
    {
      printf("Unknown command '%s'\n", cmd);
    }
  }
}

void init_sdb()
{
  /* Compile the regular expressions. */
  init_regex();

  init_wp_pool();
}
