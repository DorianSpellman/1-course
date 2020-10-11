#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main()
{
	int a, b, c, s;

	printf("Enter a : \n");
	scanf_s("%d", &a);

	printf("Enter b : \n");
	scanf_s("%d", &b);

	printf("Enter c : \n");
	scanf_s("%d", &c);

	if (a>b>c)
	{
		s = a + b;

	}
	if (a < b < c)
	{
		s = b + c;
	}
	if (a > c > b)
	{
		s = a + c;
	}

	printf("%d", s);

	return 0;
}