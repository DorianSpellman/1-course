#include <stdlib.h>
#include <stdio.h>

float fact2(int n)
{
    int fact = 1;
    for (; n > 0; n -= 2)
        fact *= n;
    return fact;
}

int main(void)
{
    int n;
    printf("N: ");
    scanf_s("%d", &n);

    printf("Factorial =  %f\n", fact2(n));
    return 0;
}