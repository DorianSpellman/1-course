#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main()
{
	int a, b, c;

	printf("Enter value a: \n");
	scanf_s("%d", &a);

	printf("Enter value b: \n");
	scanf_s("%d", &b);

	printf("Enter value c: \n");
	scanf_s("%d", &c);

	int number = (a * b) / (c * c);
	int s = (a * b) % (c * c);

	printf("number = %d \n", number);
	printf("S = %d", s);

	return 0;
}
