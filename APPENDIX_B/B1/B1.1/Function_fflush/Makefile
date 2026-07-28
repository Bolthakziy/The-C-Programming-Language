CC = gcc
TARGET = Function_fflush.out
OBJS = Function_fflush.o
SRCS = Function_fflush.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
