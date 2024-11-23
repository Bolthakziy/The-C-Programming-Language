CC = gcc
TARGET = Invert_Bits.out
OBJS = Invert_Bits.o
SRCS = Invert_Bits.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
