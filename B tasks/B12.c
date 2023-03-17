#include <stdio.h>

int main() {
    int num, digit, mx = -1, mn = 10;

    scanf("%d", &num);
    if (num == 0){
        printf("0 0");
        return 0;
    }
    while (num > 0) {
        digit = num % 10;
        if (digit > mx){
            mx = digit;
        }
        if (digit < mn){
            mn = digit;
        }
        num /= 10;
    }
    printf("%d %d", mn, mx);
    return 0;
}
