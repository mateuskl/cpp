SOURCE := $(shell find . -name "*.cc" -type f)
INCLUDE := .

check_foo: 
	cbmc $(SOURCE) --function foo --pointer-check --no-simplify -I $(INCLUDE)
	
check_inc:	
	cbmc $(SOURCE) --function inc --pointer-check --no-simplify -I $(INCLUDE)

check_foo_without_pointer_check: 
	cbmc $(SOURCE) --function foo --no-simplify -I $(INCLUDE)
	
check_inc_without_pointer_check:	
	cbmc $(SOURCE) --function inc --no-simplify -I $(INCLUDE)

