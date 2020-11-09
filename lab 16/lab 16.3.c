#include <stdio.h>

int main()
{
    int a[10];
    int n, i, j;

    printf("N: ");
    scanf_s("%d", &n);

    for (i = 0; i < n; ++i) scanf_s("%d", &a[i]);
    for (i = 0; i < n; ++i) printf("%d", a[i]);

    for (i = 0; i < n / 2 + 1; i += 2) 
    {
        printf("%d\n", a[i]);
        if (i < n / 2) printf("%d\n", a[i + 1]);             
        if (n - i - 1 > n / 2) printf("%d\n", a[n - i - 1]);
        if (n - i - 2 > n / 2) printf("%d\n", a[n - i - 2]);
    }
    return 0;
}