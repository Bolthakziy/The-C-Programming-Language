#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define  MAXOP    100
#define  MAXVAL   100
#define  NUMBER   '0'
#define  BUFSIZE  100

int sp = 0;
double val[MAXVAL];
char buf[BUFSIZE];
int bufp = 0;

void push(double f);
double pop(void);
int getch(void);
void ungetch(int c);
int getop(char s[]);

int main()
{
	int type;
	double op2;
	char s[MAXOP];

	while ((type = getop(s)) != EOF) {
		switch (type) {
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
					printf("Error : ZERO divisor....\n");
				}

				break;
			case '\n' :
				printf("\t%.8g\n", pop());
				break;
			default :
				printf("The command \'%s\' is not appropriate....\n", s);
				break;
		}
	}

	return 0;
}

void push(double f)
{
	if (sp < MAXVAL) {
		val[sp++] = f;
	} else {
		printf("Stack is full. So you can not push %g\n", f);
	}
}

double pop(void)
{
	if (sp > 0) {
		return val[--sp];
	} else {
		printf("Stack is empty....\n");
		return 0.0;
	}
}

int getch(void)
{
	return (bufp >= 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
	if (bufp >= BUFSIZE) {
		printf("Too many chracters....\n");
	} else {
		buf[bufp++] = c;
	}
}

int getop(char s[])
{
	int i, c;

	while ((s[0] = c = getch()) == ' ' || c == '\t');
	s[i] = '\0';

	if (!isdigit(c) && c != '.') {
		return c;
	} else {

	}

	i = 0;

	if (isdigit(c)) {
		while (isdigit(s[++i] = c = getch()));
	} else {

	}

	if (c == '.') {
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
