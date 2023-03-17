#include <stdio.h>

int main() {
    long a, b, exp = 1;
    scanf("%ld %ld", &a, &b);
    for (long i = 0; i < b; i++)
    {
        exp *= a;
    }
    printf("%ld", exp);

    return 0;
}
