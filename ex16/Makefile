CFLAGS=-Wall -g -std=c99 
VALGRIND_ARGS=--leak-check=full --track-origins=yes
NAME=$(shell basename $(PWD))
CREDIT_NAME=credit
BREAK_NAME=break_it

all: $(NAME) $(CREDIT_NAME) $(BREAK_NAME)

cr: clean run
cc: clean run-credit
cb: clean run-break

run: $(NAME)
	./$(NAME)

run-credit: $(CREDIT_NAME)
	./$(CREDIT_NAME)

run-break: $(BREAK_NAME)
	./$(BREAK_NAME)

valgrind: $(NAME)
	valgrind $(VALGRIND_ARGS) ./$(NAME)

clean:
	rm -f $(NAME) $(CREDIT_NAME) $(BREAK_NAME)
