CC = gcc
TARGET = nestedUnion.out
OBJS = nestedUnion.o
SRCS = nestedUnion.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
