CC = gcc
TARGET = implement_myGetchar2.out
OBJS = implement_myGetchar2.o
SRCS = implement_myGetchar2.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
