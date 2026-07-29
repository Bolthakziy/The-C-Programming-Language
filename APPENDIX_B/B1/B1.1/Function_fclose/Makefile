CC = gcc
TARGET = Function_fclose.out
OBJS = Function_fclose.o
SRCS = Function_fclose.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
