#include "strindex.h"

int strindex(char source[], char target[])
{
	int i, j, k;

	for (i = 0; source[i] != '\0'; i++) {
		for (j = i, k = 0; target[k] != '\0' && source[j] == target[k]; j++, k++) {
			;
		}

		if (k > 0 && target[k] == '\0') {
			return i;
		} else {

		}
	}

	return -1;
}
