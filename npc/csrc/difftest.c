#include <dlfcn.h>
#include <assert.h>
#include "all.h"
#include <stddef.h>
#include <stdio.h>
void (*ref_difftest_memcpy)(uint32_t addr, void *buf, uint64_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

const char *cpu_name[32]={
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);
  //printf("%s\n\n",ref_so_file);
  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY );
  if(handle==NULL){
    printf("%s\n",dlerror());
    assert(0);
  }
  assert(handle);

  ref_difftest_memcpy = (void (*)(uint32_t, void*, uint64_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void*, bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void (*)(uint64_t))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  ref_difftest_init(port);
  //ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(cpu_gpr, DIFFTEST_TO_REF);
}
bool isa_difftest_checkregs(uint64_t *ref_gpr, uint64_t pc) {
  int flag=1;
  for(int i=0;i<32;i++)
  {
    if(cpu_gpr[i]==ref_gpr[i]){
      flag=0;
      printf("%s is different after executing instruction at pc = %08lx, right = %016lx, wrong = %016lx, diff = %016lx\n",cpu_name[i], pc, ref_gpr[i], cpu_gpr[i], ref_gpr[i] ^ cpu_gpr[i]);
    }
  }
  if(flag) return true;
  return false;
}
void checkregs(uint64_t *ref_gpr, uint64_t pc) {
  if (!isa_difftest_checkregs(ref_gpr, pc)) {
    state=2;
  }
}
void difftest_step(uint64_t pc) {
  uint64_t ref_gpr[32];
  ref_difftest_exec(1);
  ref_difftest_regcpy(ref_gpr, DIFFTEST_TO_DUT);
  checkregs(ref_gpr, pc);
}