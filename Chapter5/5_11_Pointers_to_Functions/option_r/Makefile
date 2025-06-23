CC = gcc
TARGET = option_r.out
OBJS = option_r.o
SRCS = option_r.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean : 
	rm $(OBJS)
	rm $(TARGET)
