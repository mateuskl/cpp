PROGRAM := scheduler2_test.elf
SCHEDULER_FILES := scheduler2_test.cc
INCLUDE := .

all:
	g++ $(SCHEDULER_FILES) -o $(PROGRAM) -I $(INCLUDE)

check: 
	cbmc $(SCHEDULER_FILES) --bounds-check --pointer-check -I $(INCLUDE)

clean:
	rm -f *.o *.elf


