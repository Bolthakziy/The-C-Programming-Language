CC = gcc
TARGET = write_AlphabeticalOrder.out
OBJS = write_AlphabeticalOrder.o
SRCS = write_AlphabeticalOrder.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
