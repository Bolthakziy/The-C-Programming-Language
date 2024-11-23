CC = gcc
TARGET = Rotate_for_right.out
OBJS = Rotate_for_right.o
SRCS = Rotate_for_right.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
