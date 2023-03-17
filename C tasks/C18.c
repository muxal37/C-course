#include <stdio.h>

int is_digit(char letter) {
    if (letter >= '0' && letter <= '9') {
        return 1;
    }
    return 0;
}


int main() {
    char c;
    int k = 0;
    while ((c = getchar()) != EOF) {
        if (c == '.') {
            break;
        } else {
            k += is_digit(c);
        }
    }

    printf("%d", k);

    return 0;
}
