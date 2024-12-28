CC = gcc
TARGET = ternary_operator.out
OBJS = ternary_operator.o
SRCS = ternary_operator.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
