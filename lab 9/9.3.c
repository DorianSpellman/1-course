#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main()
{
	int a, k, n;

	printf("Enter the number of days: \n");
	scanf_s("%d", &k);

	printf("Enter the start-day: \n");
	scanf_s("%d", &n);

	a = (k + n) % 7;

	if (a == 0) printf("7");
	if (a == 1) printf("0");
	if (a == 2) printf("1");
	if (a == 3) printf("2");
	if (a == 4) printf("3");
	if (a == 5) printf("4");
	if (a == 6) printf("5");

	return 0;
}
