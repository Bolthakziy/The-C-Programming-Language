CC = gcc
TARGET = recover_dcl.out
OBJS = recover_dcl.o
SRCS = recover_dcl.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
