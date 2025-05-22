CC = gcc
TARGET = design_strcpy.out
OBJS = design_strcpy.o
SRCS = design_strcpy.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
