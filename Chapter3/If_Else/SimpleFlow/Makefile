CC = gcc
TARGET = SimpleFlow.out
OBJS = SimpleFlow.o
SRCS = SimpleFlow.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
