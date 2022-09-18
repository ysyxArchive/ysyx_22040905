#include <am.h>
#include <nemu.h>
#include <klib.h>
#include <klib-macros.h>
#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  kbd->keydown = 0; //inb(KBD_ADDR);
  kbd->keycode = AM_KEY_NONE;
  for(int i=0;i<4;i+=4){
    printf("%x\n",inb(KBD_ADDR+i));
  }
}
