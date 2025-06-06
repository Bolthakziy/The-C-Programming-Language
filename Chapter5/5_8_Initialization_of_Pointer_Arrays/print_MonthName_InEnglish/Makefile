CC = gcc
TARGET = print_MonthName_InEnglish.out
OBJS = print_MonthName_InEnglish.o
SRCS = print_MonthName_InEnglish.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
