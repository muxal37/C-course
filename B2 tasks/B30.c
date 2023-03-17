#include <stdio.h>

int main() {
    unsigned long n;
    scanf("%ld", &n);
    printf("%ld", n * (n + 1) * (2 * n + 1) / 6 + (n + 1) * n * (n + 1) * n / 4);

    return 0;
}