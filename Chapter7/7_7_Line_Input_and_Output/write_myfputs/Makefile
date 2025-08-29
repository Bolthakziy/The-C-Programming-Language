CC = gcc
TARGET = write_myfputs.out
OBJS = write_myfputs.o
SRCS = write_myfputs.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
