#include <stdio.h>

int a, b;

int main()
{
    scanf("%d %d", &a, &b);
    for (int i = a; i < b + 1; i++)
    {
        printf("%d ", i * i);
    }
    return 0;
}