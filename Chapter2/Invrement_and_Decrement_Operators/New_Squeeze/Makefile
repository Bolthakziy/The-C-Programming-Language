CC = gcc
TARGET = newSqueeze.out
OBJS = newSqueeze.o
SRCS = newSqueeze.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
