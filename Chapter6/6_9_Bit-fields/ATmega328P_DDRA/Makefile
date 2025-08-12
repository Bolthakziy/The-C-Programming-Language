CC = gcc
TARGET = ATmega328P_DDRA.out
OBJS = ATmega328P_DDRA.o
SRCS = ATmega328P_DDRA.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
