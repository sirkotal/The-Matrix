CC=g++
CFLAGS=-Wall -Wextra -Werror -pedantic

samples:
	@$(CC) -std=c++11 matrix.cpp -o matrix

clean:
	@rm -rf matrix 