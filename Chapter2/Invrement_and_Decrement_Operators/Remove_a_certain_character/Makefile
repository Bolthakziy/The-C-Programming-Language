CC = gcc
TARGET = remove_a_certain_character.out
OBJS = remove_a_certain_character.o
SRCS = remove_a_certain_character.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
