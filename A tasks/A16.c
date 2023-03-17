#include <stdio.h>

int a, b, c;

int main()
{
    scanf("%d %d %d", &a, &b, &c);
    if (a < b && b < c)
        printf("YES");
    else
        printf("NO");
    return 0;
}