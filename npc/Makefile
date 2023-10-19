PWD= /home/cyh/ysyx-workbench/npc

VSRC_DIR=$(PWD)/vsrc
test:
	mill -i __.test

verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(VSRC_DIR)
	mill -i __.test.runMain Elaborate -td $(VSRC_DIR)
	python3 $(PWD)/split_module.py

help:
	mill -i __.test.runMain Elaborate --help

compile:
	mill -i __.compile

bsp:
	mill -i mill.bsp.BSP/install

reformat:
	mill -i __.reformat

checkformat:
	mill -i __.checkFormat

clean:
	-rm -rf $(VSRC_DIR)

.PHONY: test verilog help compile bsp reformat checkformat clean all sim run 

TOPNAME=top
NXDC_FILES = constr/top.nxdc
INC_PATH ?=
VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build --cc  \
-O3 --x-assign fast --x-initial fast --noassert  
BUILD_DIR = $(PWD)/build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)
VSRCS = $(shell find $(abspath $(PWD)/vsrc) -name "*.v")
CSRCSS = $(shell find $(abspath $(PWD)/csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
	
default: $(BIN)
	$(shell mkdir -p $(BUILD_DIR))
	SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
	$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 ~/ysyx-workbench/nvboard/scripts/auto_pin_bind.py $^ $@
	CSRCS =$(CSRCSS) $(SRC_AUTO_BIND)
	include ~/ysyx-workbench/nvboard/scripts/nvboard.mk
	INCFLAGS = $(addprefix -I, $(INC_PATH))
	CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
	LDFLAGS += -lSDL2 -lSDL2_image

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

all: default
run: $(BIN)
	$^

REF=$(NEMU_HOME)/build/riscv64-nemu-interpreter-so
CFLAGS  += -I/usr/lib/llvm-12/include -std=c++14  -L$(REF) -fPIC -fsanitize=address -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_LIMIT_MACROS -fPIE -O3 
LDFLAGS += $(shell llvm-config-12 --libs) -L$(REF) -fPIC -fsanitize=address -lSDL2 -lSDL2_image -lreadline
VERILATOR_FLAG = --cc --exe --build  -O3 --x-assign fast --x-initial fast --noassert  --trace --prof-cfuncs

sim: $(VSRCS) $(CSRCSS)
	$(call git_commit, "sim RTL")  # DO NOT REMOVE THIS LINE!!!
	rm -rf $(BUILD_DIR)/*
	touch $(BUILD_DIR)/itrace.txt $(BUILD_DIR)/ftrace.txt $(BUILD_DIR)/mtrace.txt
	verilator  $(VERILATOR_FLAG) \
 	--top-module $(TOPNAME) $^ \
	--Mdir $(OBJ_DIR) \
	$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))


runb: sim
	$(PWD)/build/obj_dir/V$(TOPNAME) $(IMG).bin -b -e $(IMG).elf -d $(REF)
gdb: sim
	$(PWD)/build/obj_dir/V$(TOPNAME) $(IMG).bin -g -e $(IMG).elf -d $(REF)
wave: runb
	gtkwave wave.vcd	

##b: verilog
##	$(shell (echo '0a'; echo '/* verilator lint_off WIDTH */'; echo '.'; echo 'wq') | ed -s $(VSRC_DIR)/top.v )

gprof:  
	gprof $(PWD)/build/obj_dir/V$(TOPNAME)  gmon.out > analysis.txt
	verilator_profcfunc analysis.txt > report.txt

##unit test
VUNIT_DIR=$(PWD)/unit/vsrc

verilog_unit:
	mkdir -p $(VUNIT_DIR)
	mill -i __.test.runMain Elaborate_unit -td $(VUNIT_DIR)

VUNITS = $(shell find $(abspath $(PWD)/unit/vsrc) -name "*.v")
CUNITS = $(shell find $(abspath $(PWD)/unit/csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
UNITNAME = unit
	
sim_unit:$(VUNITS) $(CUNITS)
	verilator  --cc --exe --build --trace \
 	--top-module $(UNITNAME) $^ \
	--Mdir $(PWD)/unit/build/obj_dir 
	##$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))

run_unit: sim_unit
	$(PWD)/unit/build/obj_dir/V$(UNITNAME) 


