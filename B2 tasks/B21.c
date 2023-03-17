#include <stdio.h>

long a;

int main()
{
    scanf("%d", &a);

    long sum = 0, prod = 1, digit;
    while (a != 0){
        digit = a % 10;
        sum += digit;
        prod *= digit;
        a /= 10;
    }

    if (sum == prod){
        printf("YES");
        return 0;
    }

    printf("NO");
    return 0;
}