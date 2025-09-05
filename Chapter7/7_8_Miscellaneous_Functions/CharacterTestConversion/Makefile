CC = gcc
TARGET = CharacterTestConversion.out
OBJS = CharacterTestConversion.o
SRCS = CharacterTestConversion.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
