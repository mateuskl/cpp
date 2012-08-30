SOURCE := $(shell find . -name "*.cc" -type f)
INCLUDE := .

check_foo: 
	cbmc $(SOURCE) --function foo --pointer-check -I $(INCLUDE)
	
check_inc:	
	cbmc $(SOURCE) --function inc --pointer-check -I $(INCLUDE)

check_foo_without_pointer_check: 
	cbmc $(SOURCE) --function foo -I $(INCLUDE)
	
check_inc_without_pointer_check:	
	cbmc $(SOURCE) --function inc -I $(INCLUDE)

