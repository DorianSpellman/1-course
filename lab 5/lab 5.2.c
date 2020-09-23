#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float A, B, C;

	printf("Enter coordinate value A: \n A = ");
	scanf_s("%f", &A);

	printf("Enter coordinate value B: \n B = ");
	scanf_s("%f", &B);

	printf("Enter coordinate value C: \n C = ");
	scanf_s("%f", &C);

	float AC = abs (C-A);
	printf("AC = %f", AC);
		
	float BC = abs (C-B);
	printf("BC = %f", BC);

	float pro = AC * BC;
	printf("pro = %f", &pro);

	return 0;

}