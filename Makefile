build: main

main: main.o stiva.o
	g++ -Wall main.o stiva.o -o main

main.o: main.cpp 
	g++ -Wall -c main.cpp

stiva.o: stiva.cpp stiva.h
	g++ -Wall -c stiva.cpp

run: main
	./main

clean: 
	rm -f *.o main
