#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main()
{
	int x;

	printf("Enter x : \n");
	scanf_s("%d", &x);

	if (x == 0) printf("??????? ?????");
	if (x > 0) printf("A positive");
	if (x < 0) printf("A negative");
	if (x % 2 == 0) printf("even number");
	if (x % 2 != 0)printf("odd number");

	return 0;
}