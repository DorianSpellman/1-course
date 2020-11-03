#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n;
    printf("n:");
    scanf_s("%d", &n);

    int f = 0, f1 = 1, f2 = 1, k = 2;

    while (f < n) 
    {
        f = f2 + f1;
        f2 = f1;
        f1 = f;
        ++k;
    }

    printf("K: %d", k);

    return 0;
}