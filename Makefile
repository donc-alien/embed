main:main.o temp_file.o
	gcc main.o temp_file.o -o main
main.o:main.c
	gcc -c main.c
temp_file.o:temp_file.c temp_file.h
	gcc -c temp_file.c