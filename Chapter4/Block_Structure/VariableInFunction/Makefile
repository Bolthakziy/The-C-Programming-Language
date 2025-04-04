
CC = gcc
TARGET = VariableInFunction.out
OBJS = VariabeInFunction.o
SRCS = VariableInFunction.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
