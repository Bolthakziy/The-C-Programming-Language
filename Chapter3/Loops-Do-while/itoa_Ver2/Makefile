CC = gcc
TARGET = itoa_Ver2.out
OBJS = itoa_Ver2.o
SRCS = itoa_Ver2.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
