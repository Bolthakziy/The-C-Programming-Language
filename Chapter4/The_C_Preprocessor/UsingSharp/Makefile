CC = gcc
TARGET = UsingSharp.out
OBJS = Usingsharp.o
SRCS = UsingSharp.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)