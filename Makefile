.PHONY: all clean format

all: fib
clean:
	- rm *.o fib
format:
	clang-format -i *.[ch]
fib.o: fib.c fib.h
