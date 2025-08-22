CC = gcc
TARGET = write_minscanf.out
OBJS = write_minscanf.o
SRCS = write_minscanf.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
