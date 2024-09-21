CC = gcc
TARGET = FileCopying.out
OBJS = FileCopying.o
SRCS = FileCopying.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(TARGET)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
