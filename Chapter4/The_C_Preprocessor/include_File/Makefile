CC = gcc
TARGET = include_File.out
HEAD = mathematics.h
OBJS1 = include_File.o
OBJS2 = mathematics.o
SRCS1 = include_File.c
SRCS2 = mathematics.c

$(TARGET) : $(OBJS1) $(OBJS2)
		$(CC) -o $@ $(OBJS1) $(OBJS2)

$(OBJS1) : $(HEAD) $(SRCS1)
		$(CC) -c -o $(OBJS1) $(SRCS1)

clean :
		rm $@
		rm $(OBJS1)
		rm $(OBJS2)
