CC = gcc
DEPS = hellomake.h
OBJ = hellomake.o hellofunc.o

%.o: %.c $(DEPS)
	$(CC) -c $< -o $@

hellomake: $(OBJ)
	gcc -o $@ $^
