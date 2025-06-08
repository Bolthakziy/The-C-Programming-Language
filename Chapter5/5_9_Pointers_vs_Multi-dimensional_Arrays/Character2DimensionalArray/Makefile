CC = gcc
TARGET = Character2DimensionalArray.out
OBJS = Character2DimensionalArray.o
SRCS = Character2DimensionalArray.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
