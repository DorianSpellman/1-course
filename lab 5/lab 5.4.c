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

	int AC = abs(x2 - x1);
	printf("AC = %d \n", AC);

	int BC = abs(y2 - y1);
	printf("BC = %d \n", BC);

	float AB = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

	float BC = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));

	float AC = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));

	int P = AC + BC + AC;
	printf("P = %d \n", P);

	float p = P / 2;

	float S = sqrt(p * (p - AC) * (p - BC) * (p - AC));
	printf("S = %f", S);

	return 0;

}