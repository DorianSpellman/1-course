#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a, b;

	printf("Enter a: \n");
	scanf_s("%d", &a);

	b = a % 100 * 10 + a / 100;

	printf("b = %d", b);

	return 0;
}