#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int A1, B1, C1, A2, B2, C2;

	printf("Enter A1 :\n");
	scanf_s("%d", &A1);

	printf("Enter B1 :\n");
	scanf_s("%d", &B1);

	printf("Enter C1 :\n");
	scanf_s("%d", &C1);

	printf("Enter A2 :\n");
	scanf_s("%d", &A2);

	printf("Enter B2 :\n");
	scanf_s("%d", &B2);

	printf("Enter C2 :\n");
	scanf_s("%d", &C2);

	int d = A1 * B2 - B1 * A2;

	int dx = C1 * B2 - B1 * C2;

	int dy = A1 * C2 - C1 * A2;

	int x = dx / d;

	int y = dy / d;

	printf("x = %d \n", x);

	printf("y = %d", y);

	return 0;

}
