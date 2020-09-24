#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int A, B, k;

	printf("Enter A: \n A = ");
	scanf_s("%d", &A);

	printf("Enter B: \n B = ");
	scanf_s("%d", &B);

	k = A;
	A = B;
	B = k;

	printf("A = %d \n", A);
	printf("B = %d", B);

	return 0;

}