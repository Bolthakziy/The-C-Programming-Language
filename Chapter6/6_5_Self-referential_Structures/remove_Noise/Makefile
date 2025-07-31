CC = gcc
TARGET = remove_Noise.out
OBJS = remove_Noise.o
SRCS = remove_Noise.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
