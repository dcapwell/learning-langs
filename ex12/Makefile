CFLAGS=-Wall -g -std=c99 
NAME=$(shell basename $(PWD))
EXTRA_NAME=extra_credit
BREAK_NAME=break_it

all: $(NAME) $(EXTRA_NAME) $(BREAK_NAME)

run: $(NAME)
	./$(NAME)

run-extra: $(EXTRA_NAME)
	./$(EXTRA_NAME)

run-break: $(BREAK_NAME)
	./$(BREAK_NAME)

valgrind: $(NAME)
	valgrind --track-origins=yes ./$(NAME)

clean:
	rm -f $(NAME) $(EXTRA_NAME) $(BREAK_NAME)
