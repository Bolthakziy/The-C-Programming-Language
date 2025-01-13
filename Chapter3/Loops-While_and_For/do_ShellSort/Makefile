CC = gcc
TARGET = do_ShellSort.out
OBJS = do_ShellSort.o
SRCS = do_ShellSort.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
