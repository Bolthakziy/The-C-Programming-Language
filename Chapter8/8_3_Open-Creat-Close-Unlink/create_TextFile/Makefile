CC = gcc
TARGET = create_TextFile.out
OBJS = create_TextFile.o
SRCS = create_TextFile.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
