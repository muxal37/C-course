#include <stdio.h>

int main() {
    int num, digit;

    scanf("%d", &num);
    if (num == 0){
        printf("0");
        return 0;
    }
    while (num > 0) {
        printf("%d", num % 10);
        num /= 10;
    }

    return 0;
}
