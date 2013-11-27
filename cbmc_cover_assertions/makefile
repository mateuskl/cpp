SRC := main.cc

all: simple_check

cover_assertion:
	cbmc $(SRC) --cover-assertions -DCBMC

simple_check:
	cbmc $(SRC) --no-simplify -DCBMC

compile:
	g++ main.cc

