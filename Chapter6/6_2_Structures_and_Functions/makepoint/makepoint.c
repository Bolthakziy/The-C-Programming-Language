#include <stdio.h>

struct POINT
{
	int x;
	int y;
};

struct POINT makepoint(int x, int y);

int main()
{
	struct POINT pt1, pt2, middle;

	pt1 = makepoint(0, 0);
	pt2 = makepoint(10, 10);
	middle = makepoint((pt1.x + pt2.x) / 2, (pt1.y + pt2.y) / 2);

	printf("Middle point\'s x : %d\n", middle.x);
	printf("Middle point\'s y : %d\n", middle.y);

	return 0;
}

struct POINT makepoint(int x, int y)
{
	struct POINT temp;

	temp.x = x;
	temp.y = y;

	return temp;
}
