CC = gcc
TARGET = LexicographicComparison.out
OBJS = LexicographicComparison.o
SRCS = LexicographicComparison.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
