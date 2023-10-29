NAME := $(shell basename $(PWD))
all: $(NAME)-64
export MODULE := Lab3
include ../Makefile

perf :
	make perftune-64
	sudo perf record -a -g ./perftune-64
	sudo perf stat -e cycles,instructions,L1-dcache-loads,L1-dcache-load-misses,LLC-loads,LLC-load-misses ./perftune-64


