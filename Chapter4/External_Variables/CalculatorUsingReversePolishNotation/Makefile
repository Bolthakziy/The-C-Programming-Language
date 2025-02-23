CC = gcc
TARGET = CalculatorUsingReversePolishNotation.out
OBJS = CalculatorUsingReversePolishNotation.o
SRCS = CalculatorUsingReversePolishNotation.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
