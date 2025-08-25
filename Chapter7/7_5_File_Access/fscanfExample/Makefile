CC = gcc
TARGET = fscanfExample.out
OBJS = fscanfExample.o
SRCS = fscanfExample.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
