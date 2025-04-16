CC = gcc
TARGET = MACRO_for_string.out
OBJS = MACRO_for_string.o
SRCS = MACRO_for_string.c

$(TARGET) : $(OBJS)
		$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
		$(CC) -c -o $(OBJS) $(SRCS)

clean :
		rm $(OBJS)
		rm $(TARGET)