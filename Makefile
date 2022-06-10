CC     = clang
CFLAGS = -g -Wall -Wextra -std=c11 -pedantic

SRC = $(wildcard *.c)
BIN = PROG

all: $(BIN)

$(BIN): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(BIN)
