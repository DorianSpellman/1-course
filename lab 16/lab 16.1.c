#include <stdio.h>

int main()
{
    int a[100];
    int n, a, d;

    printf("N: ");
    scanf_s("%d", &n);

    printf("A: ");
    scanf_s("%d", &a);

    printf("D: ");
    scanf_s("%d", &d);

    for (i = 0; i < n; ++i, d *=d) a[i] = a*d;

    for (i = 0; i < n; ++i) printf("%d ", a[i]);
    return 0;
}