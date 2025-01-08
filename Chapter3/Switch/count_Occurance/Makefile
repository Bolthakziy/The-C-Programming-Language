CC = gcc
TARGET = count_Occurance.out
OBJS = count_Occurance.o
SRCS = count_Occurance.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
