CFLAGS=-Wall -g
NAME=$(shell basename $(PWD))

all: $(NAME)

valgrind: $(NAME)
	valgrind --track-origins=yes ./$(NAME)

clean:
	rm -f $(NAME)
