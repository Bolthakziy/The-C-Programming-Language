#include <stdio.h>

struct POINT
{
	int x;
	int y;
};

int main()
{
	struct POINT point1, point2;
	int area;

	printf("Input a point coordinate. : ");
	scanf("%d %d", &(point1.x), &(point1.y));
	printf("Input another diagonal point coordinate. : ");
	scanf("%d %d", &(point2.x), &(point2.y));

	area = (point2.x - point1.x) * (point2.y - point1.y);
	
	printf("Rectangle Area : %d\n", area);

	return 0;
}
