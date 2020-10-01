#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float R;

	printf("Enter a value for radians (0 - 2pi) :\n");
	scanf_s("%f", &R);

	float a = R * 180;
	printf("a = %f gr", a);

	return 0;

}