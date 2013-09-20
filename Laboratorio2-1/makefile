OBJS = main.cpp figura.o circulo.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG) -pedantic
LFLAGS = -Wall $(DEBUG) -pedantic
TARGET = main
$(TARGET) : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(TARGET)
figura.o : figura.hh figura.cpp
	$(CC) $(CFLAGS) figura.cpp
circulo.o : figura.hh circulo.hh circulo.cpp
	$(CC) $(CFLAGS) circulo.cpp
clean : 
	rm -f *.o *~ $(TARGET)