CC = gcc
TARGET = write_sscanf.out
OBJS = write_sscanf.o
SRCS = write_sscanf.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
