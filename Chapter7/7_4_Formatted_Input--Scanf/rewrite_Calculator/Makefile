CC = gcc
TARGET = rewrite_Calculator.out
OBJS = rewrite_Calculator.o
SRCS = rewrite_Calculator.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
