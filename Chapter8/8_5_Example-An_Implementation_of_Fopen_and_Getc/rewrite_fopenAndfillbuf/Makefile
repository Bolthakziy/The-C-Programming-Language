CC = gcc
TARGET = rewrite_fopenAndfillbuf.out
OBJS = rewrite_fopenAndfillbuf.o
SRCS = rewrite_fopenAndfillbuf.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
