CC = gcc
TARGET = Modify_getch_And_ungetch.out
OBJS = Modify_getch_And_ungetch.o
SRCS = Modify_getch_And_ungetch.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS) -lm

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
