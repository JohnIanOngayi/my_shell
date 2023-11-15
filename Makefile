CC := gcc
CFLAGS := -Wall -Werror -Wextra -pedantic -std=gnu89
SRC := $(wildcard *.c)
EXEC := hsh

all: $(EXEC)

$(EXEC): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@

.PHONY: clean

clean:
	rm -f $(EXEC)

