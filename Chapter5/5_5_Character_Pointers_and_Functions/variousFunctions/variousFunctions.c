#include <stdio.h>
#include <ctype.h>
#include <string.h>

int getline(char *s, int lim);
int atoi(char *s);
void reverse(char *s);
void itoa(int n, char *s);
int strindex(char *s, char *t);

int main()
{
    char str1[32], numberString[8], numberString2[8], str2[32] = "Gosia i Alek", str3[32] = "Zajac i Kaczka";
    int limit, number;

    printf("Enter the limit number. : ");
    scanf("%d", &limit);
    getline(str1, 6);
    printf("Input your number string. : ");
    scanf("%s", numberString);
    printf("Your converted string number : %d\n", atoi(numberString));
    printf("Input your number : ");
    scanf("%d", &number);
    itoa(number, numberString2);
    printf("Your number is converted to \"%s\"\n", numberString2);
    printf("What is the function \'strindex\'?\n");
    printf("I do not know that....\n");
    printf("Anyway i will try to know about that using 2 strings!\n");

    if (strindex(str2, str3) <= 0) {
        printf("Hmmm....\n");
    } else {
        printf("I do not really know that....\n");
    }

    return 0;
}

int getline(char *s, int lim)
{
    int c;
    char *t = s;

    while ((--lim > 0) && ((c = getchar()) != EOF) && (c != '\n')) {
        *s++ = c;
    }

    if (c == '\n') {
        *s++ = c;
    } else {

    }

    *s = '\0';

    return (s - t);
}

int atoi(char *s)
{
    int n, sign;

    for (; isspace(*s); s++);

    sign = (*s == '-')? -1 : 1;

    if ((*s == '+') || (*s = '-')) {
        s++;
    } else {

    }

    for (n = 0; isdigit(*s); s++) {
        n = 10 * n + *s - '0';
    }

    return sign * n;
}

void reverse(char *s)
{
    int c;
    char *t;

    for (t = s + (strlen(s) - 1); s < t; s++, t--) {
        c = *s;
        *s = *t;
        *t = c;
    }
}

void itoa(int n, char *s)
{
    int sign;
    char *t = s;

    if ((sign = n) < 0) {
        n = -n;
    } else {

    }

    do {
        *s++ = n % 10 + '0';
    } while ((n /= 10) > 0);

    if (sign < 0) {
        *s++ = '-';
    } else {

    }

    *s = '\0';
    reverse(t);
}

int strindex(char *s, char *t)
{
    char *b = s, *p, *r;

    for (; *s != '\0'; s++) {
        for (p = s, r = t; (*r != '\0') && (*p == *r); p++, r++);

        if ((r > t) && (*r == '\0')) {
            return (s - b);
        }
    }

    return -1;
}