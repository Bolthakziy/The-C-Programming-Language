CC = gcc
TARGET = MathematicalFunctions.out
OBJS = MathematicalFunctions.o
SRCS = MathematicalFunctions.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS) -lm

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
