#include <stdio.h>

int main() {
    int c, end = 0;
    while (!end && (c = getchar()) != EOF) {
        if (c == '.') {
            end = 1;
        } else if (c >= 'A' && c <= 'Z') {
            putchar((int) c + 32);
        } else {
            putchar(c);
        }
    }
    return 0;
}
