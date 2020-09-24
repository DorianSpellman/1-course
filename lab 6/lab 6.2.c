#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int A, B, C, k;

	printf("Enter A: \n A = ");
	scanf_s("%d", &A);

	printf("Enter B: \n B = ");
	scanf_s("%d", &B);

	printf("Enter C: \n C = ");
	scanf_s("%d", &C);

	k = A;
	A = B;
	B = C;
	C = k;

	printf("A = %d \n", A);
	printf("B = %d \n", B);
	printf("C = %d \n", C);

	return 0;

}