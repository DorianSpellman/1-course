#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf("Enter a A: \n");
    scanf_s("%f", &a);

    int n;
    printf("Enter a N: \n");
    scanf_s("%i", &n);

    float p = 1, s = 1;
    int i;

    while (n>0)
    {
        p *= -a;
        s += p;
        n--;
    }
    printf("%g", s);
   

    return 0;
}
