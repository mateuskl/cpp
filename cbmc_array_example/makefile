SOURCE := $(shell find . -name "*.cc" -type f)
INCLUDE := .

check: 
	cbmc $(SOURCE) --pointer-check -I $(INCLUDE)

check_one_by_one: check_init check_insert check_contains 
	
check_init:
	cbmc $(SOURCE) --function init --pointer-check -I $(INCLUDE)

check_insert:
	cbmc $(SOURCE) --function insert --pointer-check -I $(INCLUDE)

check_contains:
	cbmc $(SOURCE) --function contains --pointer-check -I $(INCLUDE)

check_bubble_sort:
	cbmc $(SOURCE) --function bubble_sort --pointer-check -I $(INCLUDE)
