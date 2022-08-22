VSRC_DIR=./vsrc
test:
	mill -i __.test

verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(VSRC_DIR)
	mill -i __.test.runMain Elaborate -td $(VSRC_DIR)

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
BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCSS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
	
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

sim: $(VSRCS) $(CSRCSS)
	$(call git_commit, "sim RTL")  # DO NOT REMOVE THIS LINE!!!
	rm -rf $(OBJ_DIR) 
	verilator  --cc --exe --build --trace \
 	 --top-module $(TOPNAME) $^ \
	 --Mdir $(OBJ_DIR)  

runb: sim
	./build/obj_dir/V$(TOPNAME) $(IMG)
	gtkwave wave.vcd	

gdb: sim
	./build/obj_dir/V$(TOPNAME) $(IMG) -g


