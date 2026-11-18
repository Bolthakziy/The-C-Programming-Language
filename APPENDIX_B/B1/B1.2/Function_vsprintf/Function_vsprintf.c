#include <stdio.h>
#include <stdarg.h>

void MeuLog(char *buf, const char *format, ...);

int main()
{
	char myString[32];

	MeuLog(myString, "[Nome] : %s [Cifra] : %x", "Arthur", 0x37CA);
	printf("%s\n", myString);

	return 0;
}

void MeuLog(char *buf, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	vsprintf(buf, format, args);
	va_end(args);
}
