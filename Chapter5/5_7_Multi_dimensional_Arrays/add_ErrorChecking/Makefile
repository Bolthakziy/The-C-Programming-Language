CC = gcc
TARGET = add_ErrorChecking.out
OBJS = add_ErrorChecking.o
SRCS = add_ErrorChecking.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean : 
	rm $(OBJS)
	rm $(TARGET)
