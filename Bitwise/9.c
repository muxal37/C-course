#include <stdio.h>

int main() {
    unsigned long input, sum = 0, weight = 1;
    scanf("%lu", &input);

    int remainder, count = 0;
    while (input != 0) {
        remainder = input % 3;
        input /= 3;
        if (remainder == 2) {
            input += 1;
            count += 1;
        } else if (remainder == 1) {
            count += 1;
            sum += weight;
        }
        weight *= 3;
    }
    if (sum <= 1000000) {
        printf("%lu", count);
    } else {
        printf("-1");
    }
    
    return 0;
}
