CC = gcc
TARGET = itoa_Ver3.out
OBJS = itoa_Ver3.o
SRCS = itoa_Ver3.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
