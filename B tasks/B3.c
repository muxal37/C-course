#include <stdio.h>

int a, b;

int main()
{
    scanf("%d %d", &a, &b);
    int sum = 0;
    for (int i = a; i < b + 1; i++)
    {
        sum += i * i;
    }
    printf("%d", sum);
    return 0;
}