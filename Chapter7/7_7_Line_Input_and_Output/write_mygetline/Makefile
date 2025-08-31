CC = gcc
TARGET = write_mygetline.out
OBJS = write_mygetline.o
SRCS = write_mygetline.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
