#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a, b;

    printf("a:");
    scanf_s("%d", &a);

    printf("b:");
    scanf_s("%d", &b);

    int i, j;

    for (i = a; i <= b; ++i)
    {
        for (j = 1; j <= i; ++j)
            printf("%i \n", i);
    }

    return 0;
}
