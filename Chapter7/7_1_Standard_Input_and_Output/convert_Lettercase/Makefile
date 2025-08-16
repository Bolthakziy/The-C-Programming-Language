CC = gcc
TARGET = convert_Lettercase.out
OBJS = convert_Lettercase.o
SRCS = convert_Lettercase.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
