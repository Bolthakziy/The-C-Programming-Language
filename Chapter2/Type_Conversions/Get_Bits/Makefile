CC = gcc
TARGET = Get_Bits.out
OBJS = Get_Bits.o
SRCS = Get_Bits.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
