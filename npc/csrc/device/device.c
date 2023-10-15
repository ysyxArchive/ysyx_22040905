#include <SDL2/SDL.h>
#include "../all.h"
#include <sys/time.h>

#define TIMER_HZ 60

void init_vga();
void init_i8042();

void send_key(uint8_t, bool);
void vga_update_screen();
void device_update() {
static uint64_t last = 0;
  uint64_t now = get_time();
  if (now - last < 60 / TIMER_HZ) {
    return;
  }
  last = now;

  vga_update_screen();

  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    switch (event.type) {
      case SDL_QUIT:
        state = NPC_QUIT;
        break;
      // If a key was pressed
      case SDL_KEYDOWN:
      case SDL_KEYUP: {
        uint8_t k = event.key.keysym.scancode;
        bool is_keydown = (event.key.type == SDL_KEYDOWN);
        send_key(k, is_keydown);
        break;
      }
      default: break;
    }
  }
}

void sdl_clear_event_queue() {
  SDL_Event event;
  while (SDL_PollEvent(&event));
}

void init_device() {
  //ioe_init();

  init_vga();
  init_i8042();
}