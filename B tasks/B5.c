#include <stdio.h>

int a;

int main()
{
    scanf("%d", &a);
    int sum = 0;
    while (a != 0)
    {
        sum += a % 10;
        a /= 10;
    }

    printf("%d", sum);
    return 0;
}