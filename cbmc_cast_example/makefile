SRC := main.cc

all: simple_check

bounds_check:
	cbmc $(SRC) --bounds-check

simple_check:
	cbmc $(SRC)

