#include <stdio.h>

void moveHanoi(int n, int from, int to, int via) {
    if (n == 1) {
        printf("%d %d %d\n", 1, from, to);
        return;
    }
    moveHanoi(n-1, from, via, to);
    printf("%d %d %d\n", n, from, to);
    moveHanoi(n-1, via, to, from);
}

int main() {
    int n;
    scanf("%d", &n);
    moveHanoi(n, 1, 3, 2);
    return 0;
}

