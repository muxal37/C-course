#include <stdio.h>

int main() {
    long a, b;
    scanf("%ld %ld", &a, &b);

    printf("%ld", (b * (b + 1) * (2 * b + 1) - (a - 1) * a * (2 * a - 1)) / 6);

    return 0;
}
