CC = gcc
TARGET = SumOfNumbers.out
OBJS = SumOfnumbers.o
SRCS = SumOfNumbers.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
