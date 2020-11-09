#include <stdio.h>

int main()
{
    int a[100];
    int n, i, j;

    printf("N: ");
    scanf_s("%d", &n);

    printf("A: ");
    scanf_s("%d", &a[0]);

    printf("B: ");
    scanf_s("%d", &a[1]);

    for (i = 2; i < n; ++i) 
    {
        a[i] = 0;
        for (j = 0; j < i; ++j) a[i] = a[i] + a[j];
    }

    for (i = 0; i < n; ++i) printf("%d ", a[i]);
    return 0;
}