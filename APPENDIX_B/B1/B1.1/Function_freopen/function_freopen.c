#include <stdio.h>

char alphabet[6], ch;
int num;

int main()
{
	int i;
	FILE *fpIn = freopen("input.txt", "r", stdin);
	FILE *fpOut = freopen("output.txt", "w", stdout);

	scanf("%d %c", &num, &ch);
	for (i = 0; i < 6; ++i) {
		scanf("%c", alphabet + i);
	}

	printf("%d %c\n", num, ch);
	for (i = 0; i < 6; ++i) {
		printf("%c\n", *(alphabet + i));
	}

	return 0;
}
