#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int A, B, C;

	printf("Enter A: \n A = ");
	scanf_s("%d", &A);

	B = A * A * A;

	C = B * A * A ;

	A = B * C;

	printf("A = %d \n", A);

	return 0;
}