#include <stdio.h>

int my_sum(int num)
{
    return num * (num + 1) / 2;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", my_sum(n));

    return 0;
}
