SRC := main.cc

all: bounds_check

bounds_check:
	cbmc $(SRC) --bounds-check -DCBMC

simple_check:
	cbmc $(SRC) -DCBMC

compile:
	g++ main.cc

