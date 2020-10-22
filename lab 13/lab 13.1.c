#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a N: \n ");
    scanf_s("%d", &n);

    float i = 0.1;
    while (i < n)
    {
        double p = i * n;
        i += 0.1;
        n++;
    }
    printf("Product of %d members = %f", n);

    return 0;
}