#include <stdio.h>

int main() {
    int num, digit, even = 0, odd = 0;

    scanf("%d", &num);
    if (num == 0){
        printf("0 0");
        return 0;
    }
    while (num > 0) {
        digit = num % 10;
        if (digit % 2 == 0){
            even++;
        }
        else{
        odd++;
        }
        num /= 10;
    }
    printf("%d %d", even, odd);
    return 0;
}
