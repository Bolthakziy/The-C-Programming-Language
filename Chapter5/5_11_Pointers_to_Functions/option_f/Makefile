CC = gcc
TARGET = option_f.out
OBJS = option_f.o
SRCS = option_f.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean : 
	rm $(OBJS)
	rm $(TARGET)
