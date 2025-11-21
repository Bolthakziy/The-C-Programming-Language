CC = gcc
TARGET = write_fsize2.out
OBJS = write_fsize2.o
SRCS = write_fsize2.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
