include $(AM_HOME)/scripts/isa/riscv64.mk

AM_SRCS := riscv/npc/start.S \
           riscv/npc/trm.c \
           riscv/npc/ioe/ioe.c \
           riscv/npc/ioe/timer.c \
           riscv/npc/ioe/input.c \
           riscv/npc/ioe/gpu.c \
           riscv/npc/cte.c \
           riscv/npc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDFLAGS   += -T $(AM_HOME)/scripts/linker.ld --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start
CFLAGS += -DMAINARGS=\"$(mainargs)\"
.PHONY: $(AM_HOME)/am/src/riscv/npc/trm.c

image: $(IMAGE).elf
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

run: image
	$(MAKE) -C $(NPC_HOME) ISA=$(ISA) runb IMG=$(IMAGE)

gdb: image
	$(MAKE) -C $(NPC_HOME) ISA=$(ISA) gdb IMG=$(IMAGE)

wave: image
	$(MAKE) -C $(NPC_HOME) ISA=$(ISA) wave IMG=$(IMAGE)

verilog: image
	$(MAKE) -C $(NPC_HOME) ISA=$(ISA) verilog IMG=$(IMAGE)

sim: image
	$(MAKE) -C $(NPC_HOME) ISA=$(ISA) sim IMG=$(IMAGE)

gprof: image
	$(MAKE) -C $(NPC_HOME) ISA=$(ISA) gprof IMG=$(IMAGE)

compile_run: verilog run

compile_gdb: verilog gdb