all:
	@echo 'You must choose a specific target'

claim:
	cbmc file1.c --show-claims --bounds-check --pointer-check
	
symbolic_simulation:
	cbmc file1.c --show-vcc --bounds-check --pointer-check

decision_procedure:
	cbmc file1.c --bounds-check --pointer-check

