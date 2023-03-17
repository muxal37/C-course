#include <stdio.h>

long middle(long a, long b) {
    
    return (a + b) / 2;
}


int main() {
    long n1, n2;
    scanf("%ld %ld", &n1, &n2);
    
    printf("%ld", middle(n1, n2));

    return 0;
}
