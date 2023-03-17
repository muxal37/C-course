#include <stdio.h>
int a, b, c;

int main()
{   
    scanf("%d %d %d", &a, &b, &c);
    int s = a + b + c;
    printf("%d+%d+%d=%d", a, b, c, s);
    return 0;
}