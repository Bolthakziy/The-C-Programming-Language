CC = gcc
TARGET = Function_vsprintf.out
OBJS = Function_vsprintf.o
SRCS = Function_vsprintf.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
