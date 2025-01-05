CC = gcc
TARGET = MultiWay_Decision.out
OBJS = MultiWay_Decision.o
SRCS = MultiWay_Decision.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
