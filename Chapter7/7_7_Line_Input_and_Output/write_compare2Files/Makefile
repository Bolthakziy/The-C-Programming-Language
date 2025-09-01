CC = gcc
TARGET = write_compare2Files.out
OBJS = write_compare2Files.o
SRCS = write_compare2Files.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
