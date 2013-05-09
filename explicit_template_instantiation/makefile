CXX := g++
CXXFLAGS := -c -I .

all: alpha.o main.o
	$(CXX) main.o alpha.o -o main.elf -I .

%.o: %.cc
	$(CXX) $(CXXFLAGS) $<

clean:
	rm -f *.o main.elf

