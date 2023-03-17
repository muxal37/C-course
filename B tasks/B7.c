#include <stdio.h>
#include <stdbool.h>
#define SIZE 10

int main() {
    int num;
    scanf("%d", &num);
    bool digits[SIZE] = { false };

    while (num != 0){
        int digit = num % 10;
        if (digits[digit]) {
            printf("YES");
            return 0;
        }
        num /= 10;
        digits[digit] = true;
    }
    printf("NO");
    return 0;
}