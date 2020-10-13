#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;

	printf("Enter a date: \n");
	scanf_s("%d", &n);


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

	switch (n%10)
	{
	case 1:
		printf("one");
		break;
	case 2:
		printf("two");
		break;
	case 3:
		printf("three");
		break;
	case 4:
		printf("four");
		break;
	case 5:
		printf("five");
		break;
	case 6:
		printf("six");
		break;
	case 7:
		printf("seven");
		break;
	case 8:
		printf("eight");
		break;
	case 9:
		printf("nine");
		break;
	default:
		break;
	}



	return 0;
}
