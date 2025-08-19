#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>

#define  LOCALFMT  100

void minprintf(char *fmt, ...);

int main()
{
	double height = 175.12;
	char *name = "Aleksander Kanin";
	int x = 128;


	minprintf("Name : %s\n", name);
	minprintf("Height : %f\n", height);
	minprintf("%d\t%x\t%o\t%u\n", x, x, x, x);

	return 0;
}

void minprintf(char *fmt, ...)
{
	va_list ap;
	char *p, *sval;
	char localfmt[LOCALFMT];
	int i, ival;
	unsigned uval;
	double dval;

	va_start(ap, fmt);

	for (p = fmt; *p; p++) {
		if (*p != '%') {
			putchar(*p);
			continue;
		} else {
		
		}

		i = 0;
		localfmt[i++] = '%';

		while (*(p + 1) && isalpha(*(p + 1))) {
			localfmt[i++] = *++p;
		}

		localfmt[i++] = *(p + 1);
		localfmt[i] = '\0';

		switch (*++p) {
			case 'd' :
			case 'i' :
				ival = va_arg(ap, int);
				printf(localfmt, ival);
				break;
			case 'x' :
			case 'u' :
			case 'o' :
				uval = va_arg(ap, unsigned);
				printf(localfmt, uval);
				break;
			case 'f' :
				dval = va_arg(ap, double);
				printf("%f", dval);
				break;
			case 's' :
				sval = va_arg(ap, char *);
				printf(localfmt, sval);
				break;
			default :
				putchar(*localfmt);
				break;
		}
	}

	va_end(ap);
}
