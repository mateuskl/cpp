SRC := main.cc

all: bounds_check_unwinding_15

bounds_check:
	cbmc $(SRC) --bounds-check -DCBMC

bounds_check_no_simplify:
	cbmc $(SRC) --no-simplify --bounds-check -DCBMC

bounds_check_unwinding_3:
	cbmc $(SRC) --bounds-check --unwind 3 -DCBMC

bounds_check_unwinding_15:
	cbmc $(SRC) --bounds-check --unwind 15 -DCBMC

simple_check:
	cbmc $(SRC) -DCBMC

compile:
	g++ main.cc

