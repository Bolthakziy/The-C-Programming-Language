CC = gcc
TARGET = Pointer_For_strlen.out
OBJS = Pointer_For_strlen.o
SRCS = Pointer_For_strlen.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
