#include <stdio.h>
#include <ctype.h>

#define  BUFSIZE  100

char buf[BUFSIZE];
int bufp = 0;

char getch(void);
void ungetch(int c);
int getint(char *pn);

int main()
{
	printf("Enter your number string. : ");
	scanf("%s", buf);
	printf("Your number string is converted a decimal number like below!\n");
	printf("%d\n", getint(buf));

	return 0;
}

char getch()
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
	if (bufp >= BUFSIZE) {
		printf("ungetch : too many characters\n");
	} else {
		buf[bufp++] = c;
	}
}

int getint(char *pn)
{
	int c, sign;

	while (isspace(c = getch()));

	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c);

		return 0;
	} else {
	
	}

	sign = (c == '-') ? -1 : 1;

	if (c == '+' || c == '-') {
		c = getch();
	} else {
	
	}

	for (*pn = 0; isdigit(c); c = getch()) {
		*pn = 10 * *pn + (c - '0');
	}

	*pn *= sign;

	if (c != EOF) {
		ungetch(c);
	} else {
	
	}

	return c;
}
