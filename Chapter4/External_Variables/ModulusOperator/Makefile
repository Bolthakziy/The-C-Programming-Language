CC = gcc
TARGET = ModulusOperator.out
OBJS = ModulusOperator.o
SRCS = ModulusOperator.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS) -lm

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
