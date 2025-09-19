CC = gcc
TARGET = unlink_TextFile.out
OBJS = unlink_TextFile.o
SRCS = unlink_TextFile.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
