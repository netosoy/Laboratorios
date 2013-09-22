CC = g++
OBJS = main.cpp MiPila.o
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG) -pedantic
LFLAGS = -Wall $(DEBUG) -pedantic
TARGET = main
$(TARGET) : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(TARGET)
MiPila.o : MiPila.hh MiPila.cpp
	$(CC) $(CFLAGS) MiPila.cpp
clean : 
	rm -f *.o *~ $(TARGET)