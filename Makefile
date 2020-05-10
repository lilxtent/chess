CC = g++
CFLAGS = -Wall -Werror -c
F = -o
OUT = chess
DIR = build
DIR2 = bin

all:tie

compile:
	$(CC) $(F) $(DIR)/main.o $(CFLAGS) src/main.cpp
	$(CC) $(F) $(DIR)/File.o $(CFLAGS) src/File.cpp
	$(CC) $(F) $(DIR)/Field.o $(CFLAGS) src/Field.cpp
	$(CC) $(F) $(DIR)/Converter.o $(CFLAGS) src/Converter.cpp

tie:compile
	$(CC) $(DIR)/*.o -o $(DIR2)/$(OUT)

tests:
	g++ -Wall -Werror test/main.cpp -o $(DIR2)/chess-tests

clean:
	rm $(DIR2)/$(OUT) $(DIR)/*.o