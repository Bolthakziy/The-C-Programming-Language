CC = gcc
TARGET = MACRO_Like_Function.out
OBJS = MACRO_Like_Function.o
SRCS = MACRO_Like_Function.c

$(TARGET) : $(OBJS)
		$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
		$(CC) -c -o $(OBJS) $(SRCS)

clean :
		rm $(OBJS)
		rm $(TARGET)