#include <stdio.h>

int main() {
    char hor = getchar() - 'A', vert = getchar() - '1';
    if ((hor + vert) % 2 == 0) {
        printf("BLACK");
    } else {
        printf("WHITE");
    }
    return 0;
}
