CC = gcc
TARGET = Function_vfprintf.out
OBJS = Function_vfprintf.o
SRCS = Function_vfprintf.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
