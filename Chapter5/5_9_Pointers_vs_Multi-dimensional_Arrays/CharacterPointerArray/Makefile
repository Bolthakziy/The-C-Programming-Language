CC = gcc
TARGET = CharacterPointerArray.out
OBJS = CharacterPointerArray.o
SRCS = CharacterPointerArray.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
