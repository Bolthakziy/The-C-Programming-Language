CC = gcc
TARGET = rewrite_readlines.out
OBJS = rewrite_readlines.o
SRCS = rewrite_readlines.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
