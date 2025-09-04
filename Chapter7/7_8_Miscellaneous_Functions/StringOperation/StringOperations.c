#include <stdio.h>
#include <string.h>

int main()
{
	char str1[32] = "Aleksander", str2[32] = "Hanna", str3[32] = " Kanin", str4[32] = " And", temp1[32] = "Daniel", temp2[32] = "Daniel", temp3[32] = " Katt", copy1[32], copy2[32];
	char *cp1, *cp2;

	strcat(str1, str3);
	strcat(str2, str4);
	strncat(temp1, temp3, 2);
	strcat(temp2, temp3);
	printf("\'str1\' : %s\n", str1);
	printf("\'str2\' : %s\n", str2);

	if (strcmp(temp1, temp2) == 0) {
		printf("\'temp1\' and \'temp2\' are same!\n");
	} else {
		printf("\'temp1\' and \'temp2\' are different....\n");
	}

	if (strncmp(temp1, temp2, 8) == 0) {
		printf("But til 8th characters, they are same.\n");
	} else {

	}

	strcpy(copy1, str1);
	strncpy(copy2, str1, 4);
	printf("\'copy1\' : %s\n", copy1);
	printf("\'copy2\' : %s\n", copy2);
	printf("The length of \'str2\' : %ld\n", strlen(str2));
	cp1 = strchr(str1, 'e');
	cp2 = strrchr(str1, 'e');
	printf("%s\n", cp1);
	printf("%s\n", cp2);

	return 0;
}
