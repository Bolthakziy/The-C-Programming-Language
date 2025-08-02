CC = gcc
TARGET = write_decreasingOrder.out
OBJS = write_decreasingOrder.o
SRCS = write_decreasingOrder.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
