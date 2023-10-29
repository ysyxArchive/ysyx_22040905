#include <stdio.h>
#include <stdint.h>

static int nr_draw = 0;
static uint32_t lastTime = 0;

void UpdateFPS(uint32_t now) {
  if (now - lastTime > 1000) {
    int fps = ((nr_draw<<3)|(nr_draw<<5)|(nr_draw<<6)|(nr_draw<<7)|(nr_draw<<8)|(nr_draw<<9)) / (now - lastTime);
    //printf("\r(System time: %6ds) FPS = %2d", now / 1000, fps);
    //fflush(stdout);
    nr_draw = 0;
    lastTime = now;
  }
}

void IncreaseDraw() {
  nr_draw ++;
}
