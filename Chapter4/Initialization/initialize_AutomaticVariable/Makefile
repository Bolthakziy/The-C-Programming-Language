CC = gcc
TARGET = initialize_AutomaticVariable.out
OBJS = initialize_AutomaticVariable.o
SRCS = initialize_AutomaticVariable.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
