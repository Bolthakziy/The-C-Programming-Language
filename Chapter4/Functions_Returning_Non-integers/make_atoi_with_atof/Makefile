CC = gcc
TARGET = make_atoi_with_atof.out
OBJS = make_atoi_with_atof.o
SRCS = make_atoi_with_atof.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
