#include <stdio.h>

int main() {
    int c, sum = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == '.') {
            break;
        } else if (c >= '0' && c <= '9') {
            sum += c - '0';
        }
    }
    printf("%d", sum);
    return 0;
}
