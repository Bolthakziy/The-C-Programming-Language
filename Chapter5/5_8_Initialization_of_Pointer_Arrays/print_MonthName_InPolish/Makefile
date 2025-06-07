CC = gcc
TARGET = print_MonthName_InPolish.out
OBJS = print_MonthName_InPolish.o
SRCS = print_MonthName_InPolish.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
