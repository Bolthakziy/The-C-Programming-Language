#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define  MAXOP    100
#define  NUMBER   '0'
#define  BUFSIZE  100
#define  MAXVAL   100

char buf[BUFSIZE];
double val[MAXVAL];
int bufp = 0, sp = 0;

double atof(char str[]);
int getch(void);
void ungetch(int c);
int getop(char s[]);
void ungets(char s2[]);
void push(double f);
double pop(void);

int main(int argc, char *argv[])
{
	char s[MAXOP];
	double op2;

	while (--argc > 0) {
		ungets(" ");
		ungets(*++argv);

		switch (getop(s)) {
			case NUMBER :
				push(atof(s));
				break;
			case '+' :
				push(pop() + pop());
				break;
			case '*' :
				push(pop() * pop());
				break;
			case '-' :
				op2 = pop();
				push(pop() - op2);
				break;
			case '/' :
				op2 = pop();

				if (op2 != 0.0) {
					push(pop() / op2);
				} else {
					printf("Zero divisor....\n");
				}

				break;
			default :
				printf("Unknown command....\n");
				argc = 1;
				break;
		}
	}

	printf("\t%.8g\n", pop());

	return 0;
}

double atof(char str[])
{
	double val, power;
	int i, sign;

	for (i = 0; isspace(str[i]); i++);

	sign = (str[i] == '-') ? -1 : 1;

	if ((str[i] == '+') || (str[i] == '-')) {
		i++;
	} else {
	
	}

	for (val = 0.0; isdigit(str[i]); i++) {
		val = 10.0 * val + (str[i] - '\0');
	}

	if (str[i] == '.') {
		i++;
	} else {
	
	}

	for (power = 1.0; isdigit(str[i]); i++) {
		val = 10.0 * val + (str[i] - '0');
		power *= 10.0;
	}

	return sign * val / power;
}

int getch(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
	if (bufp >= BUFSIZE) {
		printf("Too many characters....\n");
	} else {
		buf[bufp++] = c;
	}
}

int getop(char s[])
{
	int i, c;

	while (((s[0] = c = getch()) == ' ') || c == '\t');
	s[1] = '\0';

	if (!isdigit(c) && (c != '.')) {
		return c;
	} else {
	
	}

	i = 0;

	if (isdigit(c)) {
		while (isdigit(s[++i] = c = getch()));
	} else {
	
	}

	s[i] = '\0';
	
	if (c != EOF) {
		ungetch(c);
	} else {
	
	}

	return NUMBER;
}

void ungets(char s2[])
{
	int len = strlen(s2);
	void ungetch(int);

	while (len > 0) {
		ungetch(s2[--len]);
	}
}

void push(double f)
{
	if (sp < MAXVAL) {
		val[sp++] = f;
	} else {
		printf("Stack full....\n");
	}
}

double pop(void)
{
	if (sp > 0) {
		return val[--sp];
	} else {
		printf("Stack empty....\n");

		return 0.0;
	}
}
