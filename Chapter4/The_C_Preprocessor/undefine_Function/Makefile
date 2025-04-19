CC = gcc
TARGET = undefine_Function.out
OBJS = undefine_Function.o
SRCS = undefine_Function.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
