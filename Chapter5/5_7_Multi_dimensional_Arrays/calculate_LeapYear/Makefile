CC = gcc
TARGET = calculate_LeapYear.out
OBJS = calculate_LeapYear.o
SRCS = calculate_LeapYear.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
