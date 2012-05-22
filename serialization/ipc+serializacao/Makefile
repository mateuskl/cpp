CXX = $(shell wx-config --cxx)

PROGRAMAS = client server

# implementation

.SUFFIXES:	.o .cpp

.cpp.o :
	$(CXX) -c `wx-config --cxxflags` -o $@ $<

all: $(PROGRAMAS)

client:	client.o pessoa.o
	$(CXX) -o client client.o pessoa.o `wx-config --libs`
   
server: server.o pessoa.o
	$(CXX) -o server server.o pessoa.o `wx-config --libs`

clean:
	rm -f *.o $(PROGRAMAS)
