#include"../all.h"

#define SCREEN_W 400
#define SCREEN_H 300

#define DEVICE_BASE 0xa0000000
#define MMIO_BASE 0xa0000000

#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)
#define FB_ADDR         (MMIO_BASE   + 0x1000000)

static uint32_t screen_width() {
  return SCREEN_W;
}

static uint32_t screen_height() {
  return SCREEN_H;
}

uint32_t screen_size() {
  return screen_width() * screen_height() * sizeof(uint32_t);
}

static void *vmem = NULL;
static uint32_t *vgactl_port_base = NULL;

#include <SDL2/SDL.h>

static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;

static void init_screen() {
  SDL_Window *window = NULL;
  char title[128];
  sprintf(title, "RISCV64-NPC");
  SDL_Init(SDL_INIT_VIDEO);
  SDL_CreateWindowAndRenderer(
      SCREEN_W * 2,
      SCREEN_H * 2,
      0, &window, &renderer);
  SDL_SetWindowTitle(window, title);
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
      SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);
}

static inline void update_screen() {
  SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}



void vga_update_screen() {
  
  if(vgactl_port_base[1]){
    update_screen();
    vgactl_port_base[1]=0;
  }
  // call `update_screen()` when the sync register is non-zero,
  // then zero out the sync register
}


void init_vga() {
  vgactl_port_base = (uint32_t *)malloc(8);
  vgactl_port_base[0] = (screen_width() << 16) | screen_height();

  vmem = malloc(screen_size());

  init_screen();
  memset(vmem, 0, screen_size());
}
uint64_t get_vgactl_addr(uint32_t raddr){
    return *((uint64_t *)((uint8_t *)vgactl_port_base+raddr-VGACTL_ADDR));
}
void write_vgactl_addr(uint32_t addr,int len,uint64_t data){
  switch (len) {
    case 1: *((uint8_t  *)((uint8_t *)vgactl_port_base+addr-VGACTL_ADDR))= data; return;
    case 2: *((uint16_t *)((uint8_t *)vgactl_port_base+addr-VGACTL_ADDR))= data; return;
    case 4: *((uint32_t *)((uint8_t *)vgactl_port_base+addr-VGACTL_ADDR))= data; return;
    case 8: *((uint64_t *)((uint8_t *)vgactl_port_base+addr-VGACTL_ADDR))= data; return;
    }
}

void write_vmem(uint32_t addr, int len, uint64_t data) 
{
  switch (len) {
    case 1: *((uint8_t  *)((uint8_t *)vmem+addr-FB_ADDR))= data; return;
    case 2: *((uint16_t *)((uint8_t *)vmem+addr-FB_ADDR))= data; return;
    case 4: *((uint32_t *)((uint8_t *)vmem+addr-FB_ADDR))= data; return;
    case 8: *((uint64_t *)((uint8_t *)vmem+addr-FB_ADDR))= data; return;
    }
}
