CC = gcc
TARGET = cat_Ver2.out
OBJS = cat_Ver2.o
SRCS = cat_Ver2.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
