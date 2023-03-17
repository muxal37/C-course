#include <stdio.h>

int main() {
    int num, last_digit = 10, digit, count = 0;

    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        if (count > 0 && digit >= last_digit) {
            printf("NO");
            return 0;
        }
        last_digit = digit;
        count++;
        num /= 10;
    }

    printf("YES");
    return 0;
}
