#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float x1, y1, x2, y2;

	printf("Enter coordinate value: \n x = ");
	scanf_s("%f", &x1);
	printf("y = ");
	scanf_s("%f", &y1);

	printf("Enter coordinate value:: \n x = ");
	scanf_s("%f", &x2);
	printf("y = ");
	scanf_s("%f", &y2);

	float AB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	printf("AB = %f", AB);

	return 0;

}