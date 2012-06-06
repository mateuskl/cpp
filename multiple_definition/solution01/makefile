PROGRAM := main.elf

SRC := $(shell find . -name "*.cc" -type f)
OBJECTS := $(subst .cc,.o,$(SRC))

all: elf


elf: $(OBJECTS)
	g++ $(OBJECTS) -o $(PROGRAM)


clean:
	rm -f $(PROGRAM) *.o


%.o: %.cc
	g++ -Werror -c -g $< -o $@


