CC = gcc
TARGET = StorageManagement.out
OBJS = StorageManagement.o
SRCS = StorageManagement.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
