all: Project

Project: obj/main.o obj/func.o
	g++ obj/main.o obj/func.o -o Project

obj/main.o: main.c
	g++ -c main.c -o obj/main.o

obj/func.o: func.c
	g++ -c func.c -o obj/func.o
