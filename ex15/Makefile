CFLAGS=-Wall -g -std=c99 
NAME=$(shell basename $(PWD))
CREDIT_NAME=credit
BREAK_NAME=break_it

all: $(NAME) $(CREDIT_NAME) $(BREAK_NAME)

cr: clean run

run: $(NAME)
	./$(NAME)

run-credit: $(CREDIT_NAME)
	./$(CREDIT_NAME)

run-break: $(BREAK_NAME)
	./$(BREAK_NAME)

valgrind: $(NAME)
	valgrind --track-origins=yes ./$(NAME)

clean:
	rm -f $(NAME) $(CREDIT_NAME) $(BREAK_NAME)
