
.PHONY = all say_hello generate clean  o

CC := gcc

SRC := foo.c
BIN := foo

all: foo

foo: foo.o
	@echo "Checking.."
	gcc -lm foo.o -o foo


foo.o: foo.c
	@echo "Creating object.."
	gcc -c foo.c

clean:
	@echo "Cleaning up.."
	rm -rvf foo.o foo

