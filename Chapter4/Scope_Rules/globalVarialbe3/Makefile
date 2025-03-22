CC = gcc
TARGET = globaVariable3.out
OBJS = globalVarialbe3.o
SRCS = globalVariable3.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
