#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define  MAXTOKEN  100
#define  BUFSIZE   100

enum {NAME, PARENS, BRACKETS};
enum {NO, YES};

void dcl(void);
void dirdcl(void);
int getch(void);
void ungetch(int c);
int gettoken(void);
void parmdcl(void);
void dclspec(void);
int typespec(void);
int typequal(void);
int compare(char **s, char **t);

char buf[BUFSIZE];
int bufp = 0;
int tokentype;
int prevtoken = NO;
char token[MAXTOKEN];
char name[MAXTOKEN];
char datatype[MAXTOKEN];
char out[1000];

int main()
{
	int type;
	char temp[MAXTOKEN];

	while (gettoken() != EOF) {
		strcpy(out, token);

		while ((type = gettoken()) != '\n') {
			if ((type == PARENS) || (type == BRACKETS)) {
				strcat(out, token);
			} else if (type == '*') {
				if (((type == gettoken()) == PARENS) || (type == BRACKETS)) {
					sprintf(temp, "(*%s)", out);
				} else {
					sprintf(temp, "*%s", out);
				}

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
			printf("Missing error....\n");
		} else {

		}
	} else if (tokentype == NAME){
		if (name[0] == '\0') {
			strcpy(name, token);
		} else {

		}
	} else {
		prevtoken = YES;
	}

	while (((type = gettoken()) == PARENS) || (type == BRACKETS) || (type == '(')) {
		if (type == PARENS) {
			strcat(out, "function returning");
		} else if (type == '(') {
			strcat(out, " function expecting");
			parmdcl();
			strcat(out, " and returning");
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

void parmdcl(void)
{
	do {
		dclspec();
	} while (tokentype != ',');

	if (tokentype != ')') {
		printf("\')\' is missing in parameter....\n");
	} else {
	
	}
}

void dclspec(void)
{
	char temp[MAXTOKEN];

	temp[0] = '\0';
	gettoken();

	do {
		if (tokentype != NAME) {
			prevtoken = YES;
			dcl();
		} else if (typespec() == YES) {
			strcat(temp, " ");
			strcat(temp, token);
			gettoken();
		} else if (typequal() == YES) {
			strcat(temp, " ");
			strcat(temp, token);
			gettoken();
		} else {
			printf("Unknown type in parameter list....\n");
		}
	} while ((tokentype != ',') && (tokentype != ')'));

	strcat(out, temp);

	if (tokentype == ',') {
		strcat(out, ",");
	} else {

	}
}

int typespec(void)
{
	static char *types[] = {"char", "int", "void"};
	char *pt = token;

	if (bsearch(&pt, types, sizeof(types) / sizeof(char *), sizeof(char *), compare) == NULL) {
		return NO;
	} else {
		return YES;
	}
}

int typequal(void)
{
	static char *typeq[] = {"const", "volatile"};
	char *pt = token;

	if (bsearch(&pt, typeq, sizeof(typeq) / sizeof(char *), sizeof(char *), compare) == NULL) {
		return NO;
	} else {
		return YES;
	}
}

int compare(char **s, char **t)
{
	return strcmp(*s, *t);
}
