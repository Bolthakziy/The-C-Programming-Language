CC = gcc
TARGET = Set_Bits.out
OBJS = Set_Bits.o
SRCS = Set_Bits.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
