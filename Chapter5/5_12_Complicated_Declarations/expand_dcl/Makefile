CC = gcc
TARGET = expand_dcl.out
OBJS = expand_dcl.o
SRCS = expand_dcl.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
