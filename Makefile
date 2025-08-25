CC = gcc
CFLAGS = -Wall -Wextra -pedantic

all: hola tamaño-datos msj-secreto operacionesMat

hola: hola.o
	$(CC) $(CFLAGS) hola.o -o hola

tamaño-datos: tamaño-datos.o
	$(CC) $(CFLAGS) tamaño-datos.o -o tamaño-datos

msj-secreto: msj-secreto.o
	$(CC) $(CFLAGS) msj-secreto.o -o msj-secreto

operacionesMat: operacionesMat.o
	$(CC) $(CFLAGS) operacionesMat.o -o operacionesMat


hola.o: hola.c
	$(CC) $(CFLAGS) -c hola.c -o hola.o

tamaño-datos.o: tamaño-datos.c
	$(CC) $(CFLAGS) -c tamaño-datos.c -o tamaño-datos.o

msj-secreto.o: msj-secreto.c
	$(CC) $(CFLAGS) -c msj-secreto.c -o msj-secreto.o

operacionesMat.o: operacionesMat.c
	$(CC) $(CFLAGS) -c operacionesMat.c -o operacionesMat.o

clean:
	rm *.o hola tamaño-datos msj-secreto operacionesMat


.PHONY: all clean
