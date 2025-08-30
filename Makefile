CC = gcc
CFLAGS = -Wall -Wextra -pedantic -g -MMD -MP
TARGET = binario 

all: $(TARGET)
	echo "Compilacion exitosa"

SRCS = hola.c ej4.c 
OBJS = $(SRCS:.c = .o)

$(TARGETS): %: %.o
	$(CC) $(CFLAGS) $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)


.PHONY: all clean
