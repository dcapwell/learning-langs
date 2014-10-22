CFLAGS=-Wall -g -std=c99 
VALGRIND_ARGS=--leak-check=full --show-leak-kinds=all --track-origins=yes
NAME=$(shell basename $(PWD))
CREDIT_NAME=credit
BREAK_NAME=break_it
ARGS=

all: $(NAME) $(CREDIT_NAME) $(BREAK_NAME)

cr: clean run
cc: clean run-credit
cb: clean run-break

run: $(NAME)
	./$(NAME) $(ARGS)

run-credit: $(CREDIT_NAME)
	./$(CREDIT_NAME) $(ARGS)

run-break: $(BREAK_NAME)
	./$(BREAK_NAME) $(ARGS)

valgrind: $(NAME)
	valgrind $(VALGRIND_ARGS) ./$(NAME) $(ARGS)

valgrind-credit: $(CREDIT_NAME)
	valgrind $(VALGRIND_ARGS) ./$(CREDIT_NAME) $(ARGS)

valgrind-break: $(BREAK_NAME)
	valgrind $(VALGRIND_ARGS) ./$(BREAK_NAME) $(ARGS)

clean:
	rm -f $(NAME) $(CREDIT_NAME) $(BREAK_NAME)
