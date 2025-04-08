CC = gcc
TARGET = print_Decimal.out
OBJS = print_Decimal.o
SRCS = print_Decimal.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
