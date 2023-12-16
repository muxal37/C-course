#include <stdio.h>

int main() {
    unsigned long n, result = 0, input;
    scanf("%lu", &n);

    for (unsigned long i = 0; i < n; i++) {
        scanf("%lu", &input);
        result ^= input;
    }
    
    printf("%lu", result);

    return 0;
}
