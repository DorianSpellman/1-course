#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int A;

	printf("Enter A: \n A = ");
	scanf_s("%d", &A);

	int A2 = pow(A, 2);

	int A8 = A2 * A2 * A2;

	printf("A8 = %d \n", A8);

	return 0;

}