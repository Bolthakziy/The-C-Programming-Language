#include <stdio.h>
#include <stdarg.h>

void MeuPrintf(const char *message, const char *format, ...);

int main()
{
	MeuPrintf("Muito ", "Prazer!");
	MeuPrintf("Eu sou o ", "%s", "Alexandre.");

	return 0;
}

void MeuPrintf(const char *message, const char *format, ...)
{
	va_list args;
	printf("%s", message);
	va_start(args, format);
	vprintf(format, args);
	va_end(args);
	printf("\n");
}
