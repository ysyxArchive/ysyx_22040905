#include <nterm.h>
#include <stdarg.h>
#include <unistd.h>
#include <SDL.h>

char handle_key(SDL_Event *ev);

static void sh_printf(const char *format, ...) {
  static char buf[256] = {};
  va_list ap;
  va_start(ap, format);
  int len = vsnprintf(buf, 256, format, ap);
  va_end(ap);
  //for(int i=0;i<=len;i++){printf("%d|",buf[i]);}printf("\n");
  term->write(buf, len);
}

static void sh_banner() {
  sh_printf("Built-in Shell in NTerm (NJU Terminal)\n\n");
}

static void sh_prompt() {
  sh_printf("sh> ");
}

char path[400];
static void sh_handle_cmd(const char *cmd) {
  int i=0;
  if(cmd[0]=='\n')return;
  while(cmd[i]!='\0'&&cmd[i]!='\n'){
    path[i]=cmd[i];
    i++;
  }
  path[i]='\0';
  setenv("PATH","/bin",0);
  execvp(path,NULL);
  //execve(path,NULL,NULL);
}

void builtin_sh_run() {
  sh_banner();
  sh_prompt();

  while (1) {
    SDL_Event ev;
    if (SDL_PollEvent(&ev)) {
      if (ev.type == SDL_KEYUP || ev.type == SDL_KEYDOWN) {
        const char *res = term->keypress(handle_key(&ev));
        if (res) {
          sh_handle_cmd(res);
          sh_prompt();
        }
      }
    }
    refresh_terminal();
  }
}
