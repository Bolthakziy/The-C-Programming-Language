CC = gcc
TARGET = my_AtoI.out
OBJS = my_AtoI.o
SRCS = my_AtoI.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
