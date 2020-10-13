#include <stdio.h>
#include <stdlib.h>

int main()
{

 
        system("chcp 1251");
        int n;
        printf("???:");
        scanf("%i", &n);

        printf("??? ");

        switch ((n) % 10) {
        case 0:
        case 1:
            printf("???");
            break;
        case 2:
        case 3:
            printf("????");
            break;
        case 4:
        case 5:
            printf("?????");
            break;
        case 6:
        case 7:
            printf("?????");
            break;
        case 8:
        case 9:
            printf("????");
            break;
        }

        switch ((n + 1) % 5) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 9:
        case 10:
        case 11:
            printf("?? ");
            break;
        case 6:
        case 7:
        case 8:
            printf("??? ");
            break;
        }

        switch ((n + 8) % 12) {
        case 0:
            printf("?????\n");
            break;
        case 1:
            printf("??????\n");
            break;
        case 2:
            printf("?????\n");
            break;
        case 3:
            printf("?????\n");
            break;
        case 4:
            printf("???????\n");
            break;
        case 5:
            printf("????\n");
            break;
        case 6:
            printf("??????\n");
            break;
        case 7:
            printf("????\n");
            break;
        case 8:
            printf("????????\n");
            break;
        case 9:
            printf("??????\n");
            break;
        case 10:
            printf("??????\n");
            break;
        case 11:
            printf("??????\n");
            break;
        }

    return 0;
}