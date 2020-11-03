#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a, b;

    printf("a:");
    scanf_s("%d", &a);

    printf("b:");
    scanf_s("%d", &b);


  while (a>b)
    {
       a = a - b;
    }

    printf("Ostatok: %d", a);

    return 0;
}