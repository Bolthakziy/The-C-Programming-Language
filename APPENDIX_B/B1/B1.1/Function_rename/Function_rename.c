#include <stdio.h>

int main() {
	if (rename("oldText", "newText") == 0) {
		printf("Modification is done.\n");
	} else {
		printf("Modification is failed....\n");
	}

	return 0;
}
