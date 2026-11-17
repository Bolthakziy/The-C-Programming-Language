#include <stdio.h>
#include <stdarg.h>

void MeuLog(FILE *stream, const char *format, ...);

int main()
{
	FILE *fp = fopen("oMeuLog.log", "w");

	if (fp != NULL) {
		MeuLog(fp, "Bem-vinda, Laura! O code : %x", 0xFFFF);
		fclose(fp);
	} else {

	}

	MeuLog(stdout, "Muito prazer a minha amiga, Laura!");
	MeuLog(stdout, "Eu sou o Alexandre!");

	return 0;
}

void MeuLog(FILE *stream, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	fprintf(stream, "[Log Texto] ");
	vfprintf(stream, format, args);
	fprintf(stream, "\n");
	va_end(args);
}
