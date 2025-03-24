CC = gcc
TARGET = MultipleSource2.out
OBJS = main.o
OBJS1 = danmark.o
OBJS2 = norge.o
OBJS3 = island.o
HEAD1 = danmark.h
HEAD2 = norge.h
HEAD3 = island.h
SRCS = main.c
SRCS1 = danmark.c
SRCS2 = norge.c
SRCS3 = island.c

$(TARGET) : $(OBJS) $(OBJS1) $(OBJS2) $(OBJS3)
	$(CC) -o $(TARGET) $(OBJS) $(OBJS1) $(OBJS2) $(OBJS3)

$(OBJS) : $(SRCS) $(HEAD1) $(HEAD2) $(HEAD3)
	$(CC) -c -o $(OBJS) $(SRCS)

$(OBJS1) : $(SRCS1) $(HEAD1)
	$(CC) -c -o $(OBJS1) $(SRCS1)

$(OBJS2) : $(SRCS2) $(HEAD2)
	$(CC) -c -o $(OBJS2) $(SRCS2)

$(OBJS3) : $(SRCS3) $(HEAD3)
	$(CC) -c -o $(OBJS3) $(SRCS3)

clean :
	rm $(OBJS)
	rm $(OBJS1)
	rm $(OBJS2)
	rm $(OBJS3)
	rm $(TARGET)
