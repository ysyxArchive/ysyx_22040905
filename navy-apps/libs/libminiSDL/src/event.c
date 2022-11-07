#include <NDL.h>
#include <SDL.h>
#include <string.h>
#define keyname(k) #k,

#define ElemType int
#define MAXSIZE 2048
typedef struct Queue
{
	ElemType *base; 
	int       front; 
	int       rear; 
}Queue;

void InitQueue(Queue *Q)
{
	Q->base = (ElemType *)malloc(sizeof(ElemType) * MAXSIZE);
	assert(Q->base != NULL);
	Q->front = Q->rear = 0;
}

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  static char buf[20];
  NDL_PollEvent(buf, 20);
  if(buf==NULL) return 0;
  ev->key.type=(buf[1]=='u'?1:0);
  ev->key.keysym.sym=(int)buf[3];
  return 1;
}

int SDL_WaitEvent(SDL_Event *event) {
  printf("Finish\n");
  while(!SDL_PollEvent(event));
  printf("%d %d\n",event->key.type,event->key.keysym.sym);
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {

  return NULL;
}
