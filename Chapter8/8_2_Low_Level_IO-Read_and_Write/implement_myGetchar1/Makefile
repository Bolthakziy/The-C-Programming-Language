CC = gcc
TARGET = implement_myGetchar1.out
OBJS = implement_myGetchar1.o
SRCS = implement_myGetchar1.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
