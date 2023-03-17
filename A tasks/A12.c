#include <stdio.h>

int a, sum;

int main()
{
    scanf("%d", &a);
    while (a != 0){
        sum += a % 10;
        a /= 10;
    }
    printf("%d", sum);
    return 0;
}