#include <stdio.h>

int grow(int num) {
    int last = 10, digit;
    while (num > 0){
        digit = num % 10;
        if (last <= digit){
            return 0;
        }
        last = digit;
        num /= 10;
    }
    return 1;
}


int main() {
    int n;
    scanf("%d", &n);
    
    int out = grow(n);
    if (out == 1){
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
