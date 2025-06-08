CC = gcc
TARGET = rewrite_dayofyearAndmonthday.out
OBJS = rewrite_dayofyearAndmonthday.o
SRCS = rewrite_dayofyearAndmonthday.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
