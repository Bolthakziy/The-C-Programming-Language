CC = gcc
TARGET = fprintfExample.out
OBJS = fprintfExample.o
SRCS = fprintfExample.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
