CC = gcc
TARGET = rewrite_lower.out
OBJS = rewrite_lower.o
SRCS = rewrite_lower.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
