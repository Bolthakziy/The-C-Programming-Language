CC = gcc
TARGET = MultipleSource.out
OBJS = main.o
OBJS1 = kat.o
OBJS2 = kanin.o
OBJS3 = and.o
HEAD = dyr.h
SRCS = main.c
SRCS1 = kat.c
SRCS2 = kanin.c
SRCS3 = and.c

$(TARGET) : $(OBJS) $(OBJS1) $(OBJS2) $(OBJS3)
	$(CC) -o $(TARGET) $(OBJS) $(OBJS1) $(OBJS2) $(OBJS3)

$(OBJS) : $(SRCS) $(HEAD)
	$(CC) -c -o $(OBJS) $(SRCS)

$(OBJS1) : $(SRCS1) $(HEAD)
	$(CC) -c -o $(OBJS1) $(SRCS1)

$(OBJS2) : $(SRCS2) $(HEAD)
	$(CC) -c -o $(OBJS2) $(SRCS2)

$(OBJS3) : $(SRCS3) $(HEAD)
	$(CC) -c -o $(OBJS3) $(SRCS3)

clean :
	rm $(TARGET)
	rm $(OBJS)
	rm $(OBJS1)
	rm $(OBJS2)
	rm $(OBJS3)
