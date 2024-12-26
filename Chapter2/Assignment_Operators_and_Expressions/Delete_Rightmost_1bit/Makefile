CC = gcc
TARGET = delete_rightmost_1_bit.out
OBJS = delete_rightmost_1_bit.o
SRCS = delete_rightmost_1_bit.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
