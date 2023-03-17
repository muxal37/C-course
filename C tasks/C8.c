#include <stdio.h>

char to_upper(char letter){
    if (letter >= 'a' && letter <= 'z') {
            return (int) letter - 32;
        } else {
            return letter;
        }
} 


int main() {
    int c, end = 0;
    while (!end && (c = getchar()) != EOF) {
        if (c == '.') {
            end = 1;
        } else {
            putchar(to_upper(c));
        }
    }
    return 0;
}
