SOURCE := $(shell find . -name "*.cc" -type f)
INCLUDE := .

check: 
	cbmc $(SOURCE) --pointer-check -I $(INCLUDE)

