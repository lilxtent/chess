CC = g++ -std=c++11
CFLAGS = -Wall -Werror -c
F = -o
OUT = chess
DIR = build
DIR2 = bin
FILESCPP = $(wildcard src/*.cpp)
OBJECTS = $(FILESCPP:.cpp=.o)

all: $(FILESCPP) $(OUT)

$(OUT): $(OBJECTS)
	$(CC) $(subst src/,build/,$(OBJECTS)) -o bin/$@ #компилит в bin

%.o: %.cpp
	$(CC) $(CFLAGS) $< -o $(subst src/,build/,$@)

tests:
	g++ -std=c++11 -Wall -Werror test/main.cpp -o $(DIR2)/chess-tests

clean:
	rm $(DIR2)/$(OUT) $(DIR)/*.o