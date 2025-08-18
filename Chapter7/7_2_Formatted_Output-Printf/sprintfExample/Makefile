CC = gcc
TARGET = sprintfExample.out
OBJS = sprintfExample.o
SRCS = sprintfExample.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
