#include <stdio.h>

int akkerman(int m, int n) {
    if (m == 0){
        return n + 1;
    }
    if (m > 0 && n == 0){
        return akkerman(m - 1, 1);
    }
    if (m > 0 && n > 0){
        return akkerman(m - 1, akkerman(m, n - 1));
    }
}

int main() {
    long inp1, inp2;
    scanf("%d %d", &inp1, &inp2);
    printf("%d", akkerman(inp1, inp2));
    return 0;
}