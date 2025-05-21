CC = gcc
TARGET = PointerAndArray.out
OBJS = PointerAndArray.o
SRCS = PointerAndArray.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
