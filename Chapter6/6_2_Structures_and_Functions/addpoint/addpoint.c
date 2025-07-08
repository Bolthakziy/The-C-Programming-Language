#include <stdio.h>

struct POINT
{
	int x;
	int y;
};

struct POINT addpoint(struct POINT p1, struct POINT p2);

int main()
{
	struct POINT point, result, anyPoint;

	printf("Input your point \'x\'. : ");
	scanf("%d", &(point.x));
	printf("Input your point \'y\'. : ");
	scanf("%d", &(point.y));

	printf("Input a point to add \'x\'. : ");
	scanf("%d", &(anyPoint.x));
	printf("Input a point to add \'y\'. : ");
	scanf("%d", &(anyPoint.y));

	result = addpoint(point, anyPoint);

	printf("Adding process is done.\n");
	printf("Your point \'x\'. : %d\n", result.x);
	printf("Your point \'y\'. : %d\n", result.y);

	printf("What happened to your original point?\n");
	printf("Your original point \'x\'. : %d\n", point.x);
	printf("Your original point \'y\'. : %d\n", point.y);

	return 0;
}

struct POINT addpoint(struct POINT p1, struct POINT p2)
{
	p1.x += p2.x;
	p1.y += p2.y;

	return p1;
}
