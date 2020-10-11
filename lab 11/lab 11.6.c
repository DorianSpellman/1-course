#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main()
{
	int x;

	printf("Enter x (1-999) : \n");
	scanf_s("%d", &x);

	if (x % 2 == 0) printf("Even "); //??????
	if (x % 2 != 0)printf("Odd "); // ????????

	if ((x < 0) && (x < 10)) printf("single digit number"); //???????????
	if ((x > 9) && (x < 100)) printf("two-digit number"); 
	if (x > 100) printf("three-digit number"); 
	
	return 0;
}