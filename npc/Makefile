BUILD_DIR = ./build

test:
	mill -i __.test

verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)
	mill -i __.test.runMain Elaborate -td $(BUILD_DIR)

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
	-rm -rf $(BUILD_DIR)

.PHONY: test verilog help compile bsp reformat checkformat clean

PATHH=./build/
MODULE=Passthrough
CPP=Passthrough
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by yourself."
	verilator -Wall --trace -cc $(PATHH)$(MODULE).v --exe --build $(PATHH)$(CPP).cpp
	@obj_dir/V$(MODULE)
	gtkwave wave.vcd

include ../Makefile
