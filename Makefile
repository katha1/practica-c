CC = gcc
CFLAGS = -Wall -Wextra -pedantic

all: hola

hola: hola.o
	$(CC) $(CFLAGS) hola.o -o hola

hola.o: hola.c
	$(CC) $(CFLAGS) -c hola.c -o hola.o

clean:
	rm *.o hola


.PHONY: all clean
