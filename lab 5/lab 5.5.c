#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int x1, x2, y1, y2, x3, y3;

	printf("Enter coordinate value A: \n x = ");
	scanf_s("%d", &x1);
	printf("y = ");
	scanf_s("%d", &y1);


	printf("Enter coordinate value B: \n x = ");
	scanf_s("%d", &x2);
	printf("y = ");
	scanf_s("%d", &y2);

	printf("Enter coordinate value C: \n x = ");
	scanf_s("%d", &x3);
	printf("y = ");
	scanf_s("%d", &y3);

	float AB = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

	float BC = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));

	float AC = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));

	float P = AB + BC + AC;
	printf("P = %f \n", P);

	float p = P / 2;

	float S = sqrt(p * (p - AB) * (p - BC) * (p - AC));
	printf("S = %f", S);

	return 0;

}