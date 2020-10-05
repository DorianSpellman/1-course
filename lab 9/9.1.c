#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main()
{
	int a, ost;

	printf("Enter the number of seconds: \n");
	scanf_s("%d", & a);

	ost = a % 60;

	printf("reminder: %d", ost);

	return 0;
}