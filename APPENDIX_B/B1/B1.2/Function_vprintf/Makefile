CC = gcc
TARGET = Function_vprintf.out
OBJS = Function_vprintf.o
SRCS = Function_vprintf.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
