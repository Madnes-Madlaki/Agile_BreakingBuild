CC = gcc
CFLAGS = -Wall -Wextra -std=c11

test_calc: calc.c test_calc.c calc.h
	$(CC) $(CFLAGS) -o test_calc calc.c test_calc.c

test: test_calc
	./test_calc

clean:
	rm -f test_calc

.PHONY: test clean
