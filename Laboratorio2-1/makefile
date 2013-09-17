OBJS = main.cpp figura.o circulo.o triangulo.o cuadrado.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG) -pedantic
LFLAGS = -Wall $(DEBIG) -pedantic
TARGET = main
$(TARGET) : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(TARGET)
figura.o : figura.hh figura.cpp
	$(CC) $(CFLAGS) figura.cpp
circulo.o : circulo.hh circulo.cpp
	$(CC) $(CFLAGS) circulo.cpp
triangulo : triangulo.hh triangulo.cpp
	$(CC) $(CFLAGS) triangulo.cpp
cuadrado : cuadrado.hh cuadrado.cpp
	$(CC) $(CFLAGS) circulo.cpp
clean:
	rm -f *.o $(TARGET) *~