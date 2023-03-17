#include <stdio.h>
#define SIZE 127

long billy(long x) {
    
    if (-2 <= x && x < 2) {
        return x * x;
    }
    else if (x >= 2) {
        return x * x + 4 * x + 5;
    } else {
        return 4;
    }
}

int main() {
    int number, mx = -128, fn;
    while (1) {
        scanf("%d", &number);
        if (number == 0) {
            break;
        }
        fn = billy(number);
        if (fn > mx){
            mx = fn;
        }
    }
    printf("%d", mx);
    return 0;
}