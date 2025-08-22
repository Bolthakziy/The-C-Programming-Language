#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>

#define  LOCALFMT  100

void minscanf(char *fmt, ...);

int main()
{
	char name[16];
	float height;
	int number;

	minscanf("%s %f %d", name, &height, &number);
	printf("Name : %s\n", name);
	printf("Height : %f\n", height);
	printf("ID number : %d\n", number);

	return 0;
}

void minscanf(char *fmt, ...)
{
	va_list ap;
	char ch;
	char *p, *sval;
	char localfmt[LOCALFMT];
	int i = 0, *ival;
	unsigned *uval;
	double *dval;

	va_start(ap, fmt);

	for (p = fmt; *p; p++) {
		if (*p != '%') {
			localfmt[i++] = *p;
			continue;
		} else {
		
		}

		localfmt[i++] = '%';

		while (*(p + 1) && !isalpha(*(p + 1))) {
			localfmt[i++] = *++p;
		}

		localfmt[i++] = *(p + 1);
		localfmt[i] = '\0';

		switch (*++p) {
			case 'd' :
			case 'i' :
				ival = va_arg(ap, int*);
				scanf(localfmt, ival);
				break;
			case 'x' :
			case 'u' :
			case 'o' :
				uval = va_arg(ap, unsigned*);
				scanf(localfmt, uval);
				break;
			case 'f' :
				dval = va_arg(ap, float*);
				scanf(localfmt, dval);
				break;
			case 's' :
				sval = va_arg(ap, char*);
				scanf(localfmt, sval);
				break;
			default :
				scanf(localfmt);
				break;
		}

		i = 0;
	}

	va_end(ap);
}
