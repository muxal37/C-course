#include <stdio.h>

int a, b;

int main()
{
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("Above");
    if (a == b)
        printf("Equal");
    if (a < b)
        printf("Less");
    return 0;
}
