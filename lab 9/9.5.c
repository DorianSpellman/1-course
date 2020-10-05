#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main()
{
	int a;

	printf("Enter a year: \n");
	scanf_s("%d", &a);

	int c = (a / 100) + 1;

	printf("%d century \n", c);
	
	return 0;
}
