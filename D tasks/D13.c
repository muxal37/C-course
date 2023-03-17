#include <stdio.h>

void stepan(int n, int d){
    if (n == 1){
        return;
    }
    if (n % d == 0){
        printf("%d ", d);
        stepan(n / d, d);
    } else {
        stepan(n, d + 1);
    }
    

}

int main() {
    int num;
    scanf("%d", &num);
    stepan(num, 2);
    return 0;
}