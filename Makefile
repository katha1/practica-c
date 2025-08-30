CC = gcc
CFLAGS = -Wall -Wextra -pedantic -g
TARGET = ej4 hola msj-secreto 

all: $(TARGET)
	echo "Compilacion exitosa"

$(TARGETS): %: %.o
	$(CC) $(CFLAGS) $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)


.PHONY: all clean
