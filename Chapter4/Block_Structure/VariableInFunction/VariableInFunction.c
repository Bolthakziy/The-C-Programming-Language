#include <stdio.h>

int num1, num2;

double get_RectangleArea(double num1, double num2);

int main()
{
	double n1, n2;

	printf("Let\'s get an area of a rectangle!\n");
	printf("Enter a base of your rectangle. : ");
	scanf("%d", &num1);
	printf("Then enter a height of your rectangle. : ");
	scanf("%d", &num2);

	n1 = (double)num1;
	n2 = (double)num2;

	printf("The are of your rectangle : %lf\n", get_RectangleArea(n1, n2));

	return 0;
}

double get_RectangleArea(double num1, double num2)
{
	double area = num1 * num2;

	return area;
}
