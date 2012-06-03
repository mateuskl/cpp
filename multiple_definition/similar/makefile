PROGRAM := main.elf

SRC := $(shell find . -name "*.cc" -type f)
OBJECTS := $(subst .cc,.o,$(SRC))

all: elf


elf: $(OBJECTS)
	g++ $(SRC) -o $(PROGRAM)


clean:
	rm -f $(PROGRAM) *.o


.cc.o :
	g++ -Werror -c -o $@ $<


.SUFFIXES: .o .cc

