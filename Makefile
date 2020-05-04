CC = g++
CFLAGS = -Wall -Werror -c
OUT = chess
DIR = build
DIR2 = bin
F = -o

all:
	$(CC) $(F) $(DIR)/main.o $(CFLAGS) src/main.cpp
	$(CC) $(DIR)/*.o -o $(DIR2)/$(OUT)

clean:
	rm $(DIR2)/$(OUT) $(DIR)/*.o