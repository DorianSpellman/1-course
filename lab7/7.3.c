#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a;

	printf("Enter a value for degrees (0 - 360) :\n");
	scanf_s("%f", &a);

	float R = a / 180;
	printf("R = %f pi", R);

	return 0;

}