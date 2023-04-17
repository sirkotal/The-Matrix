CC=gcc
CFLAGS=-Wall -Wextra -Werror -pedantic

samples:
	@$(CC) matrix.cpp $(CFLAGS) -o matrix

clean:
	@rm -rf matrix  