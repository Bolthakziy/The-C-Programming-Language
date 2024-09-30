CC = gcc
TARGET = CharacterArrays.out
OBJS = CharacterArrays.o
SRCS = CharacterArrays.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
