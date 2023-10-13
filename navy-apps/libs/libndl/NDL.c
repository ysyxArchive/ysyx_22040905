#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include <assert.h>
#include <sys/types.h>    
#include <sys/stat.h>    
#include <fcntl.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;

struct timeval tv;
struct timezone tz;

static uint32_t *canvas;
int fb=0;
static uint32_t begin_msec;

uint32_t NDL_GetTicks() {//ms
  gettimeofday(&tv,&tz);
  return tv.tv_usec/1000+tv.tv_sec*1000-begin_msec;
}

int NDL_PollEvent(char *buf, int len) {
  int fp=open("/dev/events",O_RDONLY);
  int ret=read(fp,buf,len);
  return 1;
}
char buf[55];
int canvas_w,canvas_h;
void NDL_OpenCanvas(int *w, int *h) {
  int fp=open("/proc/dispinfo",O_RDONLY);
  assert(0!=read(fp,buf,50));
  sscanf(buf,"WIDTH : %d\nHEIGHT:%d",&canvas_w,&canvas_h);
  close(fp);
  if((*w)==0&&(*h)==0) {
    (*w) = canvas_w; (*h) = canvas_h;
  }
  assert((screen_w<=canvas_w)&&(screen_h<=canvas_h));
  if (getenv("NWM_APP")){ 
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    assert(0!=write(fbctl, buf, len));
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
  if(x==0&&y==0&&w==0&&h==0){
    w=canvas_w;
    h=canvas_h;
  }
  for(int i=0;i<h;i++){
    lseek(fb,((i+y)*canvas_w+x)*4,SEEK_SET);
    assert(0!=write(fb,pixels+(i+y)*canvas_w+x, sizeof(uint32_t)*w));
  }

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
  gettimeofday(&tv,&tz);
  begin_msec=tv.tv_sec*1000+tv.tv_usec/1000;
  fb=open("/dev/fb",O_WRONLY);
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  return 0;
}

void NDL_Quit() {
  close(fb);
}
