#include <stdio.h>

int a, b, c;

int main()
{
    scanf("%d %d %d", &a, &b, &c);
    float sa = (a + b + c) / 3.0;
    printf("%.2f", sa);
    return 0;
}