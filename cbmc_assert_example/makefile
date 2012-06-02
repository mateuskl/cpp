SRC := assert_example.cc

all: check


check:
	cbmc $(SRC) --bounds-check --pointer-check -DCBMC


program:
	g++ $(SRC) -o assert_example.elf


clean:
	rm -f assert_example.elf
