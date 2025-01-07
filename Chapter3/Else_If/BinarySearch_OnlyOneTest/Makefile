CC = gcc
TARGET = BinarySearch_OnlyOneTest.out
OBJS = BinarySearch_OnlyOneTest.o
SRCS = BinarySearch_OnlyOneTest.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
