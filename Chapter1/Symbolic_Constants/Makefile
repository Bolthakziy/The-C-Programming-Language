CC = gcc
TARGET = SymbolicConstants.out
OBJS = SymbolicConstants.o
SRCS = SymbolicConstants.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
