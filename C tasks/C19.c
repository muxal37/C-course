#include <stdio.h>
#define SIZE 64

int digit_to_num(char letter) {
    if (letter >= '0' && letter <= '9') {
        return (int) (letter - '0');
    }
    return 0;
}


int main() {
    char inp[SIZE] = {""};
    char c;
    int k = 0;
    while ((c = getchar()) != EOF) {
        if (c == '.') {
            break;
        } else {
            k += digit_to_num(c);
        }
    }

    printf("%d", k);

    return 0;
}
