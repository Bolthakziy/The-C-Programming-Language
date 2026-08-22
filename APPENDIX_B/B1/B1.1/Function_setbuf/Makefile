CC = gcc
TARGET = Function_setbuf.out
OBJS = Function_setbuf.o
SRCS = Function_setbuf.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
