CC = gcc
TARGET = initialize_CharacterArray.out
OBJS = initialize_CharacterArray.o
SRCS = initialize_CharacterArray.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)

