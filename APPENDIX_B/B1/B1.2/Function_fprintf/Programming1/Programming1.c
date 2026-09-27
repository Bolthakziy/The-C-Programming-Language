#include <stdio.h>

int main()
{
	FILE *fp = fopen("result.txt", "w");
	int i = 123, j = -453;

	fprintf(fp, "i : %05d\n", i);
	fprintf(fp, "-i : %-d\n", i);
	fprintf(fp, "+j : %+d\n", j);
	fprintf(fp, "i(8) : %#o\n", i);
	fprintf(fp, "i(16) : %#X\n", i);

	fclose(fp);

	return 0;
}
