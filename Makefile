all:
	@gcc datatype.c -o datatypes
	@mv datatypes bin/
	@echo Success: Dataypes compiled
	@echo To run use - make run

run:
	@./bin/datatypes

clean:
	@rm bin/datatypes
	@echo Success: datatpyes removed
	@echo To get it back run - make
