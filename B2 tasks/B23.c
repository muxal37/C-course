#include <stdio.h>

int main() {
    int c, cnt = 0;
    while ((c = getchar()) != EOF) {
        if (c == '.') {
            break;
        } else if (c >= '0' && c <= '9') {
            cnt += 1;
        }
    }
    printf("%d", cnt);
    return 0;
}
