CC = gcc
TARGET = write_minprintf.out
OBJS = write_minprintf.o
SRCS = write_minprintf.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
