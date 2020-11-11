.PHONY: all clean format check

all: fib

clean:
	- rm *.o fib

format:
	clang-format -i *.[ch]

check: all
	./fib -test

fib.o: fib.c fib.h
