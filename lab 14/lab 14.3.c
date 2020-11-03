#include <stdlib.h>
#include <stdio.h>

int main()
{
    int s = 1000, k=0;

    float p;

    printf("pro cent: ");
    scanf_s("%d", &p);
    p = p / 100;

    while (s <= 1100)
    {
        s = s + s * p;
        ++k;
    }

    printf("k: %d\n", k);
    printf("sum: %d", s);

    return 0;
}
