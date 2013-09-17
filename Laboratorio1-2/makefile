OBJS = main.cpp mola.o
CC = g++
DEBUG = -g
CFLAGS = -Wall $(DEBUG) -c
LFLAGS = -Wall $(DEBUG)
TARGET = main
$(TARGET) : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(TARGET)
mola.o: mola.hh mola.cpp
	$(CC) $(CFLAGS) mola.cpp
clean:
	rm -f *.o $(TARGET)
