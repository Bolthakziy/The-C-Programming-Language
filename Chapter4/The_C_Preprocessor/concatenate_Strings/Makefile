CC = gcc
TARGET = concatenate_Strings.out
OBJS = concatenate_Strings.o
SRCS = concatenate_Strings.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)