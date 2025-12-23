CC = gcc
TARGET = rewrite_myMalloc.out
OBJS = rewrite_myMalloc.o
SRCS = rewrite_myMalloc.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
