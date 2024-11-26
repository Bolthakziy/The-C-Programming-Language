CC = gcc
TARGET = profound_AssignmentOperator.out
OBJS = profound_AssignmentOperator.o
SRCS = profound_AssignmentOperator.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
