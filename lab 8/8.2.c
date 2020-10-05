#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a, b, s;

	printf("Enter the length of the line a: \n");
	scanf_s("%d", &a);

	printf("Enter the length of the line b: \n");
	scanf_s("%d", &b);

	s = a / b;

	printf("%d b in a", s);

	return 0;
}