#include <stdio.h>

struct POINT
{
	int x;
	int y;
};

struct RECT
{
	struct POINT pt1;
	struct POINT pt2;
};

int ptinrect(struct POINT p, struct RECT r);

int main()
{
	struct POINT p;
	struct RECT R;

	R.pt1.x = 4, R.pt1.y = 4, R.pt2.x = 9, R.pt2.y = 9;

	printf("Enter your point \'x\'. : ");
	scanf("%d", &(p.x));
	printf("Enter your point \'y\'. : ");
	scanf("%d", &(p.y));

	if (!ptinrect(p, R)) {
		printf("Your point is not in the rectangle area....\n");
	} else {
		printf("Your point is in the rectangle area!\n");
	}

	return 0;
}

int ptinrect(struct POINT p, struct RECT r)
{
	return ((p.x >= r.pt1.x) && (p.x < r.pt2.x) && (p.y >= r.pt1.y) && (p.y < r.pt2.y));
}
