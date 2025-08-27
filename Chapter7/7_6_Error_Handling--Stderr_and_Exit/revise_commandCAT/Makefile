CC = gcc
TARGET = revise_commandCAT.out
OBJS = revise_commandCAT.o
SRCS = revise_commandCAT.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
