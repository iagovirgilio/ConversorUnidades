CC = gcc
CFLAGS = -Iinclude -Wall
SRC = src/main.c src/comprimento.c src/massa.c src/volume.c src/temperatura.c src/area.c src/velocidade.c src/tempo.c
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
