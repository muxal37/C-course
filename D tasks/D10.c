#include <stdio.h>

int is_prime(int n, int delitel){
    if (delitel * delitel > n){
        return 1;
    }
    if (n % delitel == 0){
        return 0;
    }
    is_prime(n, delitel + 1);
}

int main() {
    int a;
    scanf("%d", &a);
    if (is_prime(a, 2) == 0 || a == 1){
        printf("NO");
    } else {
        printf("YES");
    }
    return 0;
}