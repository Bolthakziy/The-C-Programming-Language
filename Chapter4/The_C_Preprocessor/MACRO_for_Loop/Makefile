CC = gcc
TARGET = MACRO_for_Loop.out
OBJS = MACRO_for_Loop.o
SRCS = MACRO_for_Loop.c

$(TARGET) : $(OBJS)
		$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
		$(CC) -c -o $(OBJS) $(SRCS)

clean :
		rm $(OBJS)
		rm $(TARGET)