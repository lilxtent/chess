CC = g++
CFLAGS = -Wall -Werror -c
OUT = chess
DIR = build
DIR2 = bin
F = -o

all:src/*
	$(CC) $(F) $(DIR)/main.o $(CFLAGS) src/main.cpp
	$(CC) $(F) $(DIR)/File.o $(CFLAGS) src/File.cpp
	$(CC) $(F) $(DIR)/Field.o $(CFLAGS) src/Field.cpp
	$(CC) $(F) $(DIR)/Converter.o $(CFLAGS) src/Converter.cpp
	$(CC) $(DIR)/*.o -o $(DIR2)/$(OUT)

clean:
	rm $(DIR2)/$(OUT) $(DIR)/*.o