#include <stdio.h>

int a, b, tmp;

int main()
{
    scanf("%d %d", &a, &b);
    while (b != 0){
        tmp = a % b;
        a = b;
        b = tmp;
    }
    printf("%d", a);
    return 0;
}