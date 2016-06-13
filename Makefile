CC = gcc
CFLAGS = -std=c99 -pedantic -Wall
OBJECTS = filename.o

hello.o: hello.c
	$(CC) $(CFLAGS) -c hello.c

clean:
	rm -f *.o hello
