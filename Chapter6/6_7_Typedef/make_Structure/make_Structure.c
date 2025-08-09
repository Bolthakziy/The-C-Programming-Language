#include <stdio.h>

typedef struct BLDC
{
	double inertia;
	int maxRPM;
	double radius;
	double maxPower;
} bldc;

int main()
{
	bldc motor;

	printf("Enter some information of a motor.\n");
	printf("Inertia : ");
	scanf("%lf", &(motor.inertia));
	printf("Max RPM : ");
	scanf("%d", &(motor.maxRPM));
	printf("Radius : ");
	scanf("%lf", &(motor.radius));
	printf("Max Power : ");
	scanf("%lf", &(motor.maxPower));

	printf("In the below, there are some specification about a bldc motor.\n\n\n");
	printf("Inertia : %lf\n", motor.inertia);
	printf("Max RPM : %d\n", motor.maxRPM);
	printf("Radius : %lf\n", motor.radius);
	printf("Max Power : %lf\n", motor.maxPower);

	return 0;
}
