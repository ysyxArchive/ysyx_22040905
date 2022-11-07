#include <NDL.h>
#include <SDL.h>
#include <string.h>
#define keyname(k) #k,


static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

static char buf1[100],buf2[100];
int SDL_PollEvent(SDL_Event *ev) {
  NDL_PollEvent(buf1, 100);
  if(strcmp(buf1,buf2)==0)return 0;
  else{
    strcpy(buf2,buf1);
    ev->key.type=((buf1[1]=='d')?SDL_KEYDOWN:SDL_KEYUP);
    ev->key.keysym.sym=(int)buf1[3];
    //printf("%s",buf);
    return ev->key.type==SDL_KEYDOWN;
  }
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  printf("Finish\n");
  while(!SDL_PollEvent(event));
  printf("Loading\n");
  //printf("%d %d\n",event->key.type,event->key.keysym.sym);
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {

  return NULL;
}
