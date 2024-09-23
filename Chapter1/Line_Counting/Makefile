CC = gcc
TARGET = LineCounting.out
OBJS = LineCounting.o
SRCS = LineCounting.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(TARGET)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
