CC = gcc
TARGET = Function_tmpfile.out
OBJS = Function_tmpfile.o
SRCS = Function_tmpfile.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
