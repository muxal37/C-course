#include <stdio.h>

int n1(int n){
    if (n == 0) {
        return 0;
    }
    return n % 2 + n1(n / 2);
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", n1(a));
    return 0;
}