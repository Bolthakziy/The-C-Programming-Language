CC = gcc
TARGET = reverse_Recursion.out
OBJS = reverse_Recursion.o
SRCS = reverse_Recursion.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
