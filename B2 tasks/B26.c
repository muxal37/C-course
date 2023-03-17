#include <stdio.h>

int main() {
    int c, flag = 0;
    while ((c = getchar()) != EOF) {
        if (c == '.') {
            return 0;
        } else if (c != ' ') {
            putchar(c);
            flag = 0;
        } else if (!flag) {
                flag = 1;
                printf(" ");
        }
    }
}
