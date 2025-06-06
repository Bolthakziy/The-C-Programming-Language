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
char buf = 0;
int bufp = 0;

void push(double f);
double pop(void);
int getch(void);
void ungetch(int c);
int getop(char s[]);
void mathfnc(char s[]);
void ungets(char s[]);

int main()
{
	int type, i, var;
	double op1, op2, v;
	double variable[26];
	char s[MAXOP];

	for (i = 0; i < 26; i++) {
		variable[i] = 0.0;
	}

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
			case '=' :
				pop();

				if (var >= 'A' && var <= 'Z') {
					variable[var - 'A'] = pop();
				} else {
					printf("Error : No variable name....\n");
				}

				break;
			case '\n' :
				v = pop();
				printf("\t%.8g\n", v);
				break;
			default :
				if (type >= 'A' && type <= 'Z') {
					push(variable[type - 'A']);
				} else if (type == 'v') {
					push(v);
				} else {
					printf("The command \'%s\' is not appropriate....\n", s);
				}

				break;
		}

		var = type;
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
		return 0.0;
	}
}

int getch(void)
{
	int c;

	if (buf != 0) {
		c = buf;
	} else {
		c = getchar();
	}

	buf = 0;

	return c;
}

void ungetch(int c)
{
	if (buf != 0) {
		printf("There are too many characters....\n");
	} else {
		buf = c;
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

void ungets(char s[])
{
	int len = strlen(s);
	void ungetch(int);

	while (len > 0) {
		ungetch(s[--len]);
	}
}
