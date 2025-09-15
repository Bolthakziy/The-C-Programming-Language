CC = gcc
TARGET = open_TextFile.out
OBJS = open_TextFile.o
SRCS = open_TextFile.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
