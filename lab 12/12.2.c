#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    char c[10];

    printf("Enter a starting position (N, S, E, W): \n");
    gets_s(c, 9);

    printf("Enter a command: \n");
    scanf_s("%d", &n);

    switch (n) {
    case 1:
        switch (c)
        {
        case 'N':
            printf("W");
            break;
        case 'S': printf("E");
            break;
        case 'W': printf("S");
            break;
        case 'E': printf("N");
            break;
        }
        break;

    case -1:
        switch (c)
        {
        case 'N': printf("E");
            break;
        case 'S': printf("W");
            break;
        case 'W': printf("N");
            break;
        case 'E': printf("S");
            break;
        }
        break;

    case 0:
        switch (c)
        {
        case 'N': printf("N");
            break;
        case 'S': printf("S");
            break;
        case 'W': printf("W");
            break;
        case 'E': printf("E");
            break;
        }
        break;
    }
    printf("%c", c);

    return 0;
}
