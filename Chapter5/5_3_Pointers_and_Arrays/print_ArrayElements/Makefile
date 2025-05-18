CC = gcc
TARGET = print_ArrayElements.out
OBJS = print_ArrayElements.o
SRCS = print_ArrayElements.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
