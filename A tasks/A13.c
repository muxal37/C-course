#include <stdio.h>

int a, prod;

int main()
{
    prod = 1;
    scanf("%d", &a);
    while (a != 0){
        prod *= a % 10;
        a /= 10;
    }
    printf("%d", prod);
    return 0;
}