CC = gcc
TARGET = revise_minprintf.out
OBJS = revise_minprintf.o
SRCS = revise_minprintf.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
