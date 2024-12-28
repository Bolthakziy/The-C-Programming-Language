CC = gcc
TARGET = if_else_expressions.out
OBJS = if_else_expressions.o
SRCS = if_else_expressions.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
