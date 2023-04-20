#include <stdio.h>

long gcd(int a, int b){
    int tmp;
    while (b != 0){
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int main()
{
    long n1, n2;
    scanf("%d %d", &n1, &n2);
    printf("%d", gcd(n1, n2));
    return 0;
}
