#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  int i=0;
  char *buff=(char *)buf;
  for(;i<len&&(*(buff+i)!='\0');i++){
    putch(*(buff+i));
  }
  return i;
}

AM_INPUT_KEYBRD_T kbd;
size_t events_read(void *buf, size_t offset, size_t len) {
  ioe_read(AM_INPUT_KEYBRD,&kbd);
  if(kbd.keycode==AM_KEY_NONE) return 0;
  char buff[100];
  sprintf(buff,"k%c %s\n",kbd.keydown?'d':'u',keyname[kbd.keycode]);
  int lenn=strlen(buff);
  assert(lenn<=len);
  strcpy((char *)buf+offset,buff);
  return lenn;
}
AM_GPU_CONFIG_T cfg;
size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  ioe_read(AM_GPU_CONFIG,&cfg);
  char buff[100];
  sprintf(buff,"WIDTH : %d\nHEIGHT:%d",cfg.width,cfg.height);
  int lenn=strlen(buff);
  assert(lenn<=len);
  strcpy((char *)buf,buff);
  return lenn;
}
uint8_t pixels[400*300*4];
AM_GPU_FBDRAW_T ctl;
size_t fb_write(const void *buf, size_t offset, size_t len) {
  //printf("%d\n",offset);
  for(int i=0;i<len;i++){
      pixels[i]=*((uint8_t *)buf+i);
  }
  //printf("%d:%d\n",++count,lenn);
  ctl.pixels=pixels;
  ctl.y=offset/cfg.width;
  ctl.x=offset%cfg.width;
  ctl.h=(offset+len/4)/cfg.width;
  ctl.w=(offset+len/4)%cfg.width;
  assert(ctl.y<300&&ctl.x<400&&ctl.h<300&&ctl.w<400);
  ctl.sync=1;
  ioe_read(AM_GPU_FBDRAW,&ctl);
  //printf("%d %d %d %d\n",ctl.x,ctl.y,ctl.w+ctl.x,ctl.h+ctl.y);
  return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
