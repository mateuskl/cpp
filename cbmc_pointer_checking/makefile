SOURCE := $(shell find . -name "*.cc" -type f)
INCLUDE := .

check: 
	cbmc $(SOURCE) --function foo --pointer-check -I $(INCLUDE)

