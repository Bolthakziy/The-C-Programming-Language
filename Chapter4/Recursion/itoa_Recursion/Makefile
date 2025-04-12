CC = gcc
TARGET = itoa_Recursion.out
OBJS = itoa_Recursion.o
SRCS = itoa_Recursion.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS) -lm

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
