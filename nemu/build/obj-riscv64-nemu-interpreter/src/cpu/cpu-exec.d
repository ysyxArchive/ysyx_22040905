cmd_/home/cyh/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/cpu/cpu-exec.o := unused

source_/home/cyh/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/cpu/cpu-exec.o := src/cpu/cpu-exec.c

deps_/home/cyh/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/cpu/cpu-exec.o := \
    $(wildcard include/config/itrace/cond.h) \
    $(wildcard include/config/itrace.h) \
    $(wildcard include/config/difftest.h) \
    $(wildcard include/config/watchpoint.h) \
    $(wildcard include/config/isa/x86.h) \
    $(wildcard include/config/device.h) \
    $(wildcard include/config/target/am.h) \
  /home/cyh/ysyx-workbench/nemu/include/cpu/cpu.h \
  /home/cyh/ysyx-workbench/nemu/include/common.h \
    $(wildcard include/config/mbase.h) \
    $(wildcard include/config/msize.h) \
    $(wildcard include/config/isa64.h) \
  /home/cyh/ysyx-workbench/nemu/include/macro.h \
  /home/cyh/ysyx-workbench/nemu/include/debug.h \
  /home/cyh/ysyx-workbench/nemu/include/utils.h \
    $(wildcard include/config/target/native/elf.h) \
  /home/cyh/ysyx-workbench/nemu/include/cpu/decode.h \
  /home/cyh/ysyx-workbench/nemu/include/isa.h \
  /home/cyh/ysyx-workbench/nemu/src/isa/riscv64/include/isa-def.h \
  /home/cyh/ysyx-workbench/nemu/include/cpu/difftest.h \
  /home/cyh/ysyx-workbench/nemu/include/difftest-def.h \
    $(wildcard include/config/isa/mips32.h) \
    $(wildcard include/config/isa/riscv32.h) \
    $(wildcard include/config/isa/riscv64.h) \
  /home/cyh/ysyx-workbench/nemu/include/cpu/ifetch.h \
  /home/cyh/ysyx-workbench/nemu/include/memory/vaddr.h \
  src/cpu/../monitor/sdb/sdb.h \
  src/cpu/../isa/riscv64/local-include/reg.h \
    $(wildcard include/config/rt/check.h) \

/home/cyh/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/cpu/cpu-exec.o: $(deps_/home/cyh/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/cpu/cpu-exec.o)

$(deps_/home/cyh/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/cpu/cpu-exec.o):
