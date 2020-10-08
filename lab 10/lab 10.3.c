#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  

int main()
{
	int a;

	printf("Enter a: \n");
	scanf_s("%d", &a);

	if ((a % 2 == 0) && (a >  9) && (a  <100))
		printf("True");
	else
		printf("False");

	return 0;
}