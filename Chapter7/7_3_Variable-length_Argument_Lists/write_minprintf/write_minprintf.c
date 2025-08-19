#include <stdio.h>
#include <stdarg.h>

void minprintf(char *fmt, ...);

int main()
{
	char *name = "Aleksander Kanin";
	int MathScore = 96, EnglishScore = 72, ScienceScore = 75;
	double mean = ((double)MathScore + (double)EnglishScore + (double)ScienceScore) / 3.0;

	minprintf("Name : %s\n", name);
	minprintf("Math Score : %d\tEnglsih Score : %d\tScience Score : %d\n", MathScore, EnglishScore, ScienceScore);
	minprintf("Mean : %f\n", mean);

	return 0;
}

void minprintf(char *fmt, ...)
{
	va_list ap;
	char *p, *sval;
	int ival;
	double dval;

	va_start(ap, fmt);

	for (p = fmt; *p; p++) {
		if (*p != '%') {
			putchar(*p);
			continue;
		} else {
		
		}

		switch (*++p) {
			case 'd' :
				ival = va_arg(ap, int);
				printf("%d", ival);
				break;
			case 'f' :
				dval = va_arg(ap, double);
				printf("%f", dval);
				break;
			case 's' :
				for (sval = va_arg(ap, char *); *sval; sval++) {
					putchar(*sval);
				}
				break;
			default :
				putchar(*p);
				break;
		}
	}

	va_end(ap);
}
