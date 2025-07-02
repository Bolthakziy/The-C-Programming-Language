#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define  BUFSIZE   100

enum {NAME, PARENS, BRACKETS};
enum {NO, YES};

void dcl(void);
void dirdcl(void);
int getch(void);
void ungetch(int c);
void errmsg(char *msg);
int gettoken(void);

char buf[BUFSIZE];
int bufp = 0;
int tokentype;
int prevtoken = NO;
char token[100];
char name[100];
char out[100];

int main()
{
	int type;
	char temp[100];

	while (gettoken() != EOF) {
		strcpy(out, token);

		while ((type = gettoken()) != '\n') {
			if ((type == PARENS) || (type == BRACKETS)) {
				strcat(out, token);
			} else if (type == '*') {
				sprintf(temp, "(*%s)", out);
				strcpy(out, temp);
			} else if (type == NAME) {
				sprintf(temp, "%s %s", token, out);
				strcpy(out, temp);
			} else {
				printf("Invalid input at %s\n", token);
			}
		}

		printf("%s\n", out);
	}

	return 0;
}

void dcl(void)
{
	int ns;

	for (ns = 0; gettoken() == '*'; ) {
		ns++;
	}

	dirdcl();

	while (ns-- > 0) {
		strcat(out, " pointer to");
	}
}

void dirdcl(void)
{
	int type;

	if (tokentype == '(') {
		dcl();

		if (tokentype != ')') {
			errmsg("Missing error \')\'....\n");
		} else {

		}
	} else if (tokentype == NAME) {
		strcpy(name, token);
	} else {
		errmsg("DCL Error....\n");
	}

	while (((type = gettoken()) == PARENS) || (type == BRACKETS)) {
		if (type == PARENS) {
			strcat(out, " function returning");
		} else {
			strcat(out, " array");
			strcat(out, token);
			strcat(out, " of");
		}
	}
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

void errmsg(char *msg)
{
	printf("%s", msg);
	prevtoken = YES;
}

int gettoken(void)
{
	int c;
	char *p = token;

	if (prevtoken == YES) {
		prevtoken = NO;

		return tokentype;
	} else {
	
	}

	while (((c = getch()) == ' ') || (c == '\t'));

	if (c == '(') {
		if ((c = getch()) == ')') {
			strcpy(token, "()");

			return tokentype = PARENS;
		} else {
			ungetch(c);

			return tokentype = '(';
		}
	} else if (c == '[') {
		for (*p++ = c; (*p++ = getch()) != ']'; );

		*p = '\0';

		return tokentype = BRACKETS;
	} else if (isalpha(c)) {
		for (*p++ = c; isalnum(c = getch()); ) {
			*p++ = c;
		}

		*p = '\0';
		ungetch(c);

		return tokentype = NAME;
	} else {
		return tokentype = c;
	}
}
