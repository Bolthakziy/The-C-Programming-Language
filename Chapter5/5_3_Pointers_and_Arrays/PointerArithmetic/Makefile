CC = gcc
TARGET = PointerArithmetic.out
OBJS = PointerArithmetic.o
SRCS = PointerArithmetic.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
