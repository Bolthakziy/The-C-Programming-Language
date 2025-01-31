CC = gcc
TARGET = Multi_C_Files.out

$(TARGET) : Multi_C_Files.o myGetLine.o strindex.o
	$(CC) -o $@ Multi_C_Files.o myGetLine.o strindex.o

Multi_C_Files.o : Multi_C_Files.c myGetLine.h strindex.h
	$(CC) -c Multi_C_Files.c

myGetLine.o : myGetLine.c myGetLine.h
	$(CC) -c myGetLine.c

strindex.o : strindex.c strindex.h
	$(CC) -c strindex.c

clean : 
	rm Multi_C_Files.o
	rm myGetLine.o
	rm strindex.o
	rm $(TARGET)
