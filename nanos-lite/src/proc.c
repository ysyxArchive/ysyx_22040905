#include <proc.h>

#define MAX_NR_PROC 4

static PCB pcb[MAX_NR_PROC] __attribute__((used)) = {};
static PCB pcb_boot = {};
PCB *current = NULL;

void naive_uload(PCB *pcb, const char *filename);

void switch_boot_pcb() {
  current = &pcb_boot;
}

void hello_fun(void *arg) {
  int j = 1;
  while (1) {
    Log("Hello World from Nanos-lite with arg '%p' for the %dth time!", (uintptr_t)arg, j);
    j ++;
    yield();
  }
}

void init_proc() {
  switch_boot_pcb();

  Log("Initializing processes...");

  int choose = 2;
  switch(choose){
    case 0: naive_uload(NULL,"/bin/pal"); break;
    case 1: naive_uload(NULL,"/bin/menu"); break;
    case 2: naive_uload(NULL,"/bin/fixe-test"); break;
    case 3: naive_uload(NULL,"/bin/nslider"); break;
    case 4: naive_uload(NULL,"/bin/timer-test"); break;
    case 5: naive_uload(NULL,"/bin/bmp-test"); break;
    case 6: naive_uload(NULL,"/bin/file-test"); break;
    case 7: naive_uload(NULL,"/bin/hello"); break;
    case 8: naive_uload(NULL,"/bin/event-test"); break;
    case 9: naive_uload(NULL,"/bin/bird"); break;
    case 10: naive_uload(NULL,"/bin/dummy"); break;
    case 11: naive_uload(NULL,"/bin/nterm"); break;
    default: assert(0);
  }
  
  // load program here

}

Context* schedule(Context *prev) {
  return NULL;
}
