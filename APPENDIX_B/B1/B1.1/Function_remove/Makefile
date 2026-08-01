CC = gcc
TARGET = Function_remove.out
OBJS = Function_remove.o
SRCS = Function_remove.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJD)
