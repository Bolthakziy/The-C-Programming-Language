CC = gcc
TARGET = modify_binsearch.out
OBJS = modify_binsearch.o
SRCS = modify_binsearch.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
