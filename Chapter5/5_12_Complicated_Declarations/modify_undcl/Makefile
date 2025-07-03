CC = gcc
TARGET = modify_undcl.out
OBJS = modify_undcl.o
SRCS = modify_undcl.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
