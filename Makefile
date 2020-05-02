OFILES = main.o

all:

tie:$(OFILES)
	g++ $(OFILES) -o chess

main.o:main.cpp
	g++ -c main.cpp