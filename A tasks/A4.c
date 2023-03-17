#include <stdio.h>
int a, b, c;

int main()
{   
    scanf("%d %d %d", &a, &b, &c);
    int s = a + b + c;
    int p = a * b * c;
    printf("%d+%d+%d=%d\n", a, b, c, s);
    printf("%d*%d*%d=%d", a, b, c, p);
    return 0;
}