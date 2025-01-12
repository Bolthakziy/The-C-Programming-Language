CC = gcc
TARGET = use_Function_atoi.out
OBJS = use_Function_atoi.o
SRCS = use_Function_atoi.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
