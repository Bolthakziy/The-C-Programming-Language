CC = gcc
TARGET = Function_tmpnam.out
OBJS = Function_tmpnam.o
SRCS = Function_tmpnam.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
