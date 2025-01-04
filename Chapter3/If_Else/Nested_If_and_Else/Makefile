CC = gcc
TARGET = Nested_If_and_Else.out
OBJS = Nested_If_and_Else.o
SRCS = Nested_If_and_Else.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
