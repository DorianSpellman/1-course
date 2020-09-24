#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int x;

	printf("Enter x: \n x = ");
	scanf_s("%d", &x);

	float y = 3 * (pow(x, 6)) - 6 * (pow(x, 2)) - 7;
	printf("y = %f \n", y);

	return 0;

}