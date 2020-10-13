#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter a year: \n");
    scanf_s("%d", &n);

    printf("the year of ");

    switch ((n) % 10) 
    {
    case 0:
    case 1:
        printf("bel");
        break;
    case 2:
    case 3:
        printf("chern");
        break;
    case 4:
    case 5:
        printf("zelen");
        break;
    case 6:
    case 7:
        printf("krasn");
        break;
    case 8:
    case 9:
        printf("jelt");
        break;
    default:
        break;
    }

    switch ((n + 1) % 5) 
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 9:
    case 10:
    case 11:
        printf("oy ");
        break;
    case 6:
    case 7:
    case 8:
        printf("ogo ");
        break;
    default:
        break;
    }

    switch ((n + 8) % 12) 
    {
    case 0:
        printf("krisi");
        break;
    case 1:
        printf("korovi");
        break;
    case 2:
        printf("tigra");
        break;
    case 3:
        printf("zaytsa");
        break;
    case 4:
        printf("dracona");
        break;
    case 5:
        printf("zmei");
        break;
    case 6:
        printf("loshadi");
        break;
    case 7:
        printf("ovtsi");
        break;
    case 8:
        printf("obezyani");
        break;
    case 9:
        printf("kuritsi");
        break;
    case 10:
        printf("sobaki");
        break;
    case 11:
        printf("svinyi");
        break;
    default:
        break;
    }

    return 0;
}