CC = gcc
TARGET = pushbackEOF.out
OBJS = pushbackEOF.o
SRCS = pushbackEOF.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS) -lm

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
