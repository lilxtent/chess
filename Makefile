CC = g++ -std=c++11
CFLAGS = -Wall -Werror -MP -MMD -c
PROG = chess
DIR = build
DIR2 = bin
FILESCPP = $(wildcard src/*.cpp)
OBJECTS = $(subst .cpp,.o,$(FILESCPP))

all: $(FILESCPP) $(PROG)


$(PROG): $(subst src/,build/,$(OBJECTS))
	$(CC) $(subst src/,build/,$^) -o bin/$@

build/%.o: src/%.cpp
	$(CC) $(CFLAGS) $< -o $@

-include build/*.d

#компилирует тесты
tests:
	g++ -std=c++11 -Wall -Werror test/main.cpp -o $(DIR2)/chess-tests

clean:
	rm $(DIR2)/$(OUT) $(DIR)/*.o