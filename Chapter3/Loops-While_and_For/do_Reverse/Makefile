CC = gcc
TARGET = do_Reverse.out
OBJS = do_Reverse.o
SRCS = do_Reverse.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
