CC = gcc
TARGET = extendedDetab.out
OBJS = extendedDetab.o
SRCS = extendedDetab.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
