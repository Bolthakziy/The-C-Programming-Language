CC = gcc
TARGET = implement_isupper.out
OBJS = implement_isupper.o
SRCS = implement_isupper.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
