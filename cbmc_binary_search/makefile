SRC := binsearch.c
FUNCTION := binsearch

all:
	@echo 'You must choose a specific target'

check_function:
	cbmc $(SRC) --function $(FUNCTION)


check_function_informing_bounds:
	cbmc $(SRC) --function $(FUNCTION) --unwind 6 --bounds-check

