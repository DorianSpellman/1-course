#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int x1, x2, y1, y2, AC, BC, P, S;

	printf("Enter coordinate value A: \n x = ");
	scanf_s("%d", &x1);
	printf("y = ");
	scanf_s("%d", &y1);


	printf("Enter coordinate value C: \n x = ");
	scanf_s("%d", &x2);
	printf("y = ");
	scanf_s("%d", &y2);

	int AC = abs(x2 - x1);
	printf("AC = %d \n", AC);

	int BC = abs(y2 - y1);
	printf("BC = %d \n", BC);

	int S = AC * BC;
	printf("S = %d", S);

	int P = 2 * (AC + BC);
	printf("S = %d", P);

	return 0;

}