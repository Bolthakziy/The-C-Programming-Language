#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define  MAXLINE  100

void filecomp(FILE *fp1, FILE *fp2);

int main(int argc, char *argv[])
{
	FILE *fp1, *fp2;

	if (argc != 3) {
		fprintf(stderr, "Files are not enough....\n");
		exit(1);
	} else {
		if ((fp1 = fopen(*++argv, "r")) == NULL) {
			fprintf(stderr, "It fails to open \'%s\'....\n", *argv);
			exit(1);
		} else if ((fp2 = fopen(*++argv, "r")) == NULL) {
			fprintf(stderr, "It fails to open \'%s\'....\n", *argv);
			exit(1);
		} else {
			filecomp(fp1, fp2);
			fclose(fp1);
			fclose(fp2);
			exit(0);
		}
	}

	return 0;
}

void filecomp(FILE *fp1, FILE *fp2)
{
	char line1[MAXLINE], line2[MAXLINE];
	char *lp1, *lp2;

	do {
		lp1 = fgets(line1, MAXLINE, fp1);
		lp2 = fgets(line2, MAXLINE, fp2);

		if ((lp1 == line1) && (lp2 == line2)) {
			if (strcmp(line1, line2) != 0) {
				printf("They are different!\n");
				lp1 = lp2 = NULL;
			} else {
				printf("They are same!\n");
				lp1 = lp2 = NULL;
			}
		} else if ((lp1 != line1) && (lp2 == line2)) {
			printf("Something bad happenes....\n");
		} else if ((lp1 == line1) && (lp2 != line2)) {
			printf("Something bad happenes....\n");
		} else {

		}
	} while ((lp1 == line1) && (lp2 == line2));
}
