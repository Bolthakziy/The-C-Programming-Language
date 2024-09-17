CC = gcc
TARGET = FahrenheitIntoCelsius.out
OBJS = FahrenheitIntoCelsius.o
SRCS = FahrenheitIntoCelsius.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
