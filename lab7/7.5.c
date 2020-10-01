#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int A, B;

	printf("Enter A :\n");
	scanf_s("%d", &A);

	printf("Enter B :\n");
	scanf_s("%d", &B);

	float x = -B / A;

	printf("x = %f", x);

	return 0;

}