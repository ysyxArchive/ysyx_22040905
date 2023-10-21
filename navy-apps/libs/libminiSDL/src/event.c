#include <NDL.h>
#include <SDL.h>
#include <string.h>
#include <assert.h>
#define keyname(k) #k,


static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

static const char *code[]={
  "NONE\n","ESCAPE\n", "F1\n", "F2\n", "F3\n", "F4\n", "F5\n", "F6\n", "F7\n", "F8\n", "F9\n", "F10\n", "F11\n", "F12\n", \
  "GRAVE\n", "1\n", "2\n", "3\n", "4\n", "5\n", "6\n", "7\n", "8\n", "9\n", "0\n", "MINUS\n", "EQUALS\n", "BACKSPACE\n", \
  "TAB\n", "Q\n", "W\n", "E\n", "R\n", "T\n", "Y\n", "U\n", "I\n", "O\n", "P\n", "LEFTBRACKET\n", "RIGHTBRACKET\n", "BACKSLASH\n", \
  "CAPSLOCK\n", "A\n", "S\n", "D\n", "F\n", "G\n", "H\n", "J\n", "K\n", "L\n", "SEMICOLON\n", "APOSTROPHE\n", "RETURN\n", \
  "LSHIFT\n", "Z\n", "X\n", "C\n", "V\n", "B\n", "N\n", "M\n", "COMMA\n", "PERIOD\n", "SLASH\n", "RSHIFT\n", \
  "LCTRL\n", "APPLICATION\n", "LALT\n", "SPACE\n", "RALT\n", "RCTRL\n", \
  "UP\n", "DOWN\n", "LEFT\n", "RIGHT\n", "INSERT\n", "DELETE\n", "HOME\n", "END\n", "PAGEUP\n", "PAGEDOWN\n"
};

static uint8_t key_state[83];

int findsdlk(char* buf){
  for(int i=0;i<83;i++)
  if(strcmp(buf,code[i])==0){
    return i;
  }
  //assert(0);
  return 0;
}
int SDL_PushEvent(SDL_Event *ev) {
  assert(0);
  return 0;
}

static char buf1[30],buf2[30];

int SDL_PollEvent(SDL_Event *ev) {
  NDL_PollEvent(buf1, 30);
  if(strcmp(buf1,buf2)==0)return 0;
  else{
    strcpy(buf2,buf1);
    ev->key.type=((buf1[1]=='d')?SDL_KEYDOWN:SDL_KEYUP);
    ev->key.keysym.sym=findsdlk(buf1+3);
    if(ev->key.type==SDL_KEYDOWN){
      key_state[ev->key.keysym.sym]=1;
      printf("%s\n",keyname[ev->key.keysym.sym]);
    }
    else{
      key_state[ev->key.keysym.sym]=0;
    }
    return 1;//ev->key.type==SDL_KEYDOWN;
  }
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  printf("\033[0;32mFinish\033[0m\n");
  while(!SDL_PollEvent(event));
  printf("\033[0;33mLoading\033[0m\n");
  //printf("%d %d\n",event->key.type,event->key.keysym.sym);
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  assert(0);
  return 0;
}
static uint8_t keynum=83;
uint8_t* SDL_GetKeyState(int *numkeys) {
  if(numkeys!=NULL)return &keynum;
  return key_state;
}
