SRC := lock-example.c
FUNCTION := binsearch

all: check


check:
	cbmc $(SRC) --bounds-check --pointer-check --unwind 3

