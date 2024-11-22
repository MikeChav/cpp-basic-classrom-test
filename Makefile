CC=g++
CFLAGS=-std=c++17

List.o: List.cpp
	$(CC) $(CFLAGS) -c List.cpp -o $@

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o $@

main: main.o List.o
	$(CC) $(CFLAGS) main.o List.o -o $@

run: main
	./main