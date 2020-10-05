#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main()
{
	int a, k;

	printf("Enter the number of days: \n");
	scanf_s("%d", &k);

	a = k % 7;

	if (a == 0) printf("Sunday");
	if (a == 1) printf("Monday");
	if (a == 2) printf("Tuesday");
	if (a == 3) printf("Wednesday");
	if (a == 4) printf("Thursday");
	if (a == 5) printf("Friday");
	if (a == 6) printf("Saturday");

	return 0;
}