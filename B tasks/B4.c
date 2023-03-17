#include <stdio.h>

int a;

int main()
{
    scanf("%d", &a);
    int c = 0;
    while (a != 0)
    {
        c += 1;
        a /= 10;
    }
    if (c == 3)
    {
        printf("YES");
        return 0;
    }
    printf("NO");
    return 0;
}