CC = gcc
TARGET = declare_Pointer.out
OBJS = declare_Pointer.o
SRCS = declare_Pointer.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
