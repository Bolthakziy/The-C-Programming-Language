CC = gcc
TARGET = extendedEntab.out
OBJS = extendedEntab.o
SRCS = extendedEntab.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
