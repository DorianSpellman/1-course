#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  

int main()
{
	int a, b, c;

	printf("Enter a: \n");
	scanf_s("%d", &a);

	printf("Enter b: \n");
	scanf_s("%d", &b);

	printf("Enter c: \n");
	scanf_s("%d", &c);

	if ((a < b) && (b < c))
		printf("True");
	else
		printf("False");

	return 0;
}