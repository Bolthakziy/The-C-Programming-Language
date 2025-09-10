CC = gcc
TARGET = RandomNumberGeneration.out
OBJS = RandomNumberGeneration.o
SRCS = RandomNumberGeneration.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
