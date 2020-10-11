#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main()
{
	int a, b;

	printf("Enter a : \n");
	scanf_s("%d", &a);

	printf("Enter b : \n");
	scanf_s("%d", &b);

	if (a != b)
	{
		if (a > b)
		{
			b = a;
		}
		else
		{
			a = b;
		}

	}
	else
	{
		a, b = 0;
	}

	printf("%d, %d", a, b);

	return 0;
}
