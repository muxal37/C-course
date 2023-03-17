#include <stdio.h>

long my_exp(long a, long b) {
    long tmp = 1;
    for (long i = 0; i < b; i++)
    {
        tmp *= a;
    }
    return tmp;
}


int main() {
    long n1, n2, exp = 1;
    scanf("%ld %ld", &n1, &n2);
    
    printf("%ld", my_exp(n1, n2));

    return 0;
}
