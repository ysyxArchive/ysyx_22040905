#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)
//#define MODE_800x600
#ifdef MODE_800x600
# define W    (800)
# define H    (600)
#else
# define W    (400)
# define H    (300)
#endif

//#define FPS   60

#define RMASK 0x00ff0000
#define GMASK 0x0000ff00
#define BMASK 0x000000ff
#define AMASK 0x00000000

void __am_gpu_init() {//test code
//  int i;
//  int w = inw(VGACTL_ADDR);  
//  int h = inw(VGACTL_ADDR+2);
//  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
//  for (i = 0; i < w * h; i ++) fb[i] =i;
//  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = W, .height = H,
    .vmemsz = 0
  };
}

uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {

  int x = ctl->x+10, y = ctl->y+10, w = ctl->w, h = ctl->h;
  int len=0;
  for(int i=0;i<h;i++)
  for(int j=0;j<w;j++){
    fb[(y+i)*W+x+j]=(*((uint32_t *)(ctl->pixels+len)));
    len+=4;
  }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
  

}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
