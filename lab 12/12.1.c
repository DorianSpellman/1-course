#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, x;

	printf("Enter a date: \n");
	scanf_s("%d", &n);

	printf("Enter a month: \n");
	scanf_s("%d", &x);


	if (n % 10 == 1)
	{
		switch (n % 10)
		{
		case 0:
			printf("the tenth ");
			break;
		case 1:
			printf("the eleventh ");
			break;
		case 2:
			printf("the twelveth ");
			break;
		case 3:
			printf("the thirteenth ");
			break;
		case 4:
			printf("the fourteenth ");
			break;
		case 5:
			printf("the fifteenth ");
			break;
		case 6:
			printf("the sixteenth ");
			break;
		case 7:
			printf("the seventeenth ");
			break;
		case 8:
			printf("the eighteenth ");
			break;
		case 9:
			printf("the nineteenth ");
			break;
		default:
			break;

		}
	}

	else
	{
		switch (n / 10)
		{
		case 2:
			printf("the twenty ");
			break;
		case 3:
			printf("the  thirty ");
			break;
		default:
			break;
		}
	}

	switch (n % 10)
	{
	case 1:
		printf("first");
		break;
	case 2:
		printf("second");
		break;
	case 3:
		printf("third");
		break;
	case 4:
		printf("fourth");
		break;
	case 5:
		printf("fifth");
		break;
	case 6:
		printf("sixth");
		break;
	case 7:
		printf("seventh");
		break;
	case 8:
		printf("eighth");
		break;
	case 9:
		printf("ninth");
		break;
	default:
		break;
	}

	switch (x)
	{
	case 1:
		printf(" of Jenuary");
		break;
	case 2:
		printf(" of February");
		break;
	case 3:
		printf(" of March");
		break;
	case 4:
		printf(" of April");
		break;
	case 5:
		printf(" of May");
		break;
	case 6:
		printf(" of June");
		break;
	case 7:
		printf(" of July");
		break;
	case 8:
		printf(" of August");
		break;
	case 9:
		printf(" of September");
		break;
	case 10:
		printf(" of October");
		break;
	case 11:
		printf(" of November");
		break;
	case 12:
		printf(" of December");
		break;

	default:
		break;
	}


	return 0;
}