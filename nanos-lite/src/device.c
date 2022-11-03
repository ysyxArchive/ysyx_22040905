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
AM_GPU_FBDRAW_T ctl;
size_t fb_write(const void *buf, size_t offset, size_t len) {
  printf("%d\n\n",len);
  for(int i=0;i<len;i++){
    printf("%02x",(uint32_t *)buf+i);
  }
  strncpy(ctl.pixels,buf,len);
  ctl.x=offset/cfg.width;
  ctl.y=offset%cfg.width;
  ctl.w=cfg.width;
  ctl.h=cfg.height;
  ctl.sync=1;
  ioe_read(AM_GPU_FBDRAW,&ctl);
  return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
