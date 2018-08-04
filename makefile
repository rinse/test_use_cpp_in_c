
main: main.c test.o
	gcc -g -O0 main.c test.o -o $@

test.o: test.cpp
	g++ -g -O0 -c $< -o $@

