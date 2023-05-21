CC = gcc
main :
	$(CC) main2.c header.h bacakarakter.c array.c jumlahkata.c  strtok3.c scoring.c bubblesort.c writeBinary.c readBinary.c  -o main2

clean:
	rm *.o main
