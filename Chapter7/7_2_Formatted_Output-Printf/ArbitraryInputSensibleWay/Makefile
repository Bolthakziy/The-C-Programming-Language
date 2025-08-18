CC = gcc
TARGET = ArbitraryInputSensibleWay.out
OBJS = ArbitraryInputSensibleWay.o
SRCS = ArbitraryInputSensibleWay.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
