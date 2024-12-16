CC = gcc
CFLAGS = -Iinclude -Wall
SRC = src/main.c
OBJ = $(SRC:.c=.o)
TARGET = build/conversor

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

run: all
	./build/conversor
