CC = gcc
TARGET = conditionalInclusion.out
OBJS = conditionalInclusion.o
SRCS = conditionalInclusion.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
