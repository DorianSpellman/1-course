#include <stdlib.h>
#include <stdio.h>

void int sign(float x)
{
    if (x < 0)
        sign = -1;
    if (x = 0)
        sign = 0;
    if (x > 0)
        sign = 1;
}

int main(void)
{
        float a, b, res;
        printf("A: ");
        scanf_s("%f", &a);

        printf("B: ");
        scanf_s("%f", &b);

        res = sign(a) + sign(b);

        sign(a, b);
        printf("res: %f", res);

    return 0;
}