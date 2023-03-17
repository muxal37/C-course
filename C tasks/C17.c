#include <stdio.h>

int is_happy(int num) {
    long sum = 0, prod = 1, digit;
    while (num != 0){
        digit = num % 10;
        sum += digit;
        prod *= digit;
        num /= 10;
    }
    if (sum == prod){
        return 1;
    }
    return 0;
}


int main() {
    int n;
    scanf("%d", &n);
    
    int out = is_happy(n);
    if (out == 1){
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
