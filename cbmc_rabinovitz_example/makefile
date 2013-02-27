GOTOCC := /usr/local/local_programs/cbmc/src/goto-cc/goto-cc

all: comp clean check

check:
	goto-cc main.cc -I .

comp:
	g++ main.cc -I .

clean:
	rm -f *~ *.o gmon.out a.out

default.profile: clean check 
	gprof $(GOTOCC) gmon.out > default.profile