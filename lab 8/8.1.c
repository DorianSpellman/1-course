#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int b, kb;

	printf("Enter a file size in bytes: \n");
	scanf_s("%d", &b);

	kb = b / 1024;

	printf("%d kb", kb);

	return 0;
}