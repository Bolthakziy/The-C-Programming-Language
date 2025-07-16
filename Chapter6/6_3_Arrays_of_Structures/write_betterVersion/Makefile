CC = gcc
TARGET = write_betterVersion.out
OBJS = write_betterVersion.o
SRCS = write_betterVersion.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
