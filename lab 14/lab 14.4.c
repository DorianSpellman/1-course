#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a, b;

    printf("a:");
    scanf_s("%d", &a);

    printf("b:");
    scanf_s("%d", &b);

    while ((a != 0) & (b != 0)) 
    {
        if (a > b) 
            a = a % b;
        else 
            b = b % a;
    }
    printf("%d", a + b);
    return 0;
}