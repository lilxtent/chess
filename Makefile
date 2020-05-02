OFILES = main.o

launch:tie
	./chess

tie:$(OFILES)
	g++ $(OFILES) -o chess

main.o:main.cpp
	g++ -c main.cpp