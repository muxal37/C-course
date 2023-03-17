#include <stdio.h>

int a;

int main()
{
    scanf("%d", &a);
    for (long i = 1; i < a + 1; i++)
    {
        printf("%d %d %d\n", i, i * i, i * i * i);
    }
    return 0;
}