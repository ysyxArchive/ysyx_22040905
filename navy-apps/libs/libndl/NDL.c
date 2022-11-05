#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include <assert.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;

struct timeval tv;
struct timezone tz;

static uint32_t *canvas;
uint32_t NDL_GetTicks() {//ms
  gettimeofday(&tv,&tz);
  return tv.tv_usec/1000;
}

int NDL_PollEvent(char *buf, int len) {
  FILE* fp=fopen("/dev/events","r");
  int flag=0;
  for(int i=0;i<len;i++){
    flag=1;
    if(fscanf(fp,"%c",buf+i)==EOF)flag=0;
    if(*(buf+i)=='\n'){
      *(buf+i)='\0';
      break;
    }
  }
  return flag;
}

int canvas_w,canvas_h;
void NDL_OpenCanvas(int *w, int *h) {
  FILE* fp=fopen("/proc/dispinfo","r");
  fscanf(fp,"WIDTH : %d\nHEIGHT:%d",&canvas_w,&canvas_h);
  if((*w)==0&&(*h)==0) {
    (*w) = canvas_w; (*h) = canvas_h;
  }
  canvas=malloc(sizeof(uint32_t)*(canvas_w)*(canvas_h));
  assert((screen_w<=canvas_w)&&(screen_h<=canvas_h));
  if (getenv("NWM_APP")){ 
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  FILE* fp=fopen("/dev/fb","w");
  /*for(int i=0;i<h*w;i++){
    printf("%08x\n",pixels[i]);
  }*/
  for(int i=0;i<h;i++){
    //fseek(fp,(i+y)*canvas_w+x)*4,SEEK_SET);
    //printf("offset:%08x\n",((y+i)*max_w+x)<<2);
    for(int j=w-1;j>=0;j--){
    canvas[(i+y)*canvas_w+j+x]=pixels[i*w+j];
      //fprintf(fp,"%08x",pixels[cnt++]);
    //printf("%d %d\n",i,j);
    }
  }
  for(int i=0;i<h*w;i++){
    fprintf(fp,"%08x",canvas[i]);
    printf("%d\n",i);}
  fclose(fp);
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  return 0;
}

void NDL_Quit() {
}
