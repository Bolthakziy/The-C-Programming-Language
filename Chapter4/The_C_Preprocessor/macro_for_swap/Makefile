CC = gcc
TARGET = macro_for_swap.out
OBJS = macro_for_swap.o
SRCS = macro_for_swap.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)