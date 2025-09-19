CC = gcc
TARGET = close_TextFile.out
OBJS = close_TextFile.o
SRCS = close_TextFile.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
