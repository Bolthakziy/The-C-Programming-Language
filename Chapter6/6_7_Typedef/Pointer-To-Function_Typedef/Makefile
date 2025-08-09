CC = gcc
TARGET = Pointer-To_Function_Typedef.out
OBJS = Pointer-To_Function_Typedef.o
SRCS = Pointer-To_Function_Typedef.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
