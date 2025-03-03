#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

#define  MAXOP    100
#define  MAXVAL   100
#define  NUMBER   '0'
#define  NAME     'n'
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
void mathfnc(char s[]);

int main()
{
	int type;
	double op1, op2;
	char s[MAXOP];

	while ((type = getop(s)) != EOF) {
		switch (type) {
			case NUMBER :
				push(atof(s));
				break;
			case NAME :
				mathfnc(s);
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
			case '%' :
				op2 = pop();

				if (op2 != 0.0) {
					push(fmod(pop(), op2));
				} else {
					printf("Error : ZERO divisor....\n");
				}

				break;
			case '?' :
				op2 = pop();
				printf("\t%.8g\n", op2);
				push(op2);
				break;
			case 'd' :
				op2 = pop();
				push(op2);
				push(op2);
				break;
			case 's' :
				op1 = pop();
				op2 = pop();
				push(op1);
				push(op2);
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
	int c, i;

	while ((s[0] = c = getch()) == ' ' || c == '\t');
	s[1] = '\0';
	i = 0;

	if (islower(c)) {
		while (islower(s[++i] = c = getch()));
		s[i] = '\0';

		if (strlen(s) > 1) {
			return NAME;
		} else {
			return c;
		}
	} else {

	}

	if (!isdigit(c) && c != '.') {
		return c;
	} else {

	}

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

void mathfnc(char s[])
{
	double op2;

	if (strcmp(s, "sin") == 0) {
		push(sin(pop()));
	} else if (strcmp(s, "cos") == 0) {
		push(cos(pop()));
	} else if (strcmp(s, "exp") == 0) {
		push(exp(pop()));
	} else if (strcmp(s, "pow") == 0) {
		op2 = pop();
		push(pow(pop(), op2));
	} else {
		printf("Error : %s not supported\n", s);
	}
}
