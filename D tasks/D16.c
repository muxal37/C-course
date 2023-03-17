#include <stdio.h>

int is2pow(long n)
{
    if (n == 1){
        return 1;
    }
    if (n % 2 == 1){
        return 0;
    }
    is2pow(n / 2);
}

int main() {
    long inp;
    scanf("%ld", &inp);
    if (is2pow(inp) == 1){
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}