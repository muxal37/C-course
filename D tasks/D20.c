#include <stdio.h>

int recurs_power(int n, int p){
    if (p == 0){
        return 1;
    }
    return n * recurs_power(n, p - 1);
}

int main() {
    int base, pow;
    scanf("%d %d", &base, &pow);
    if (pow == 0){
        printf("1");
    } else {
        printf("%d", recurs_power(base, pow));
    }
    
}
