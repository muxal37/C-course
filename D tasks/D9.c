#include <stdio.h>

int func(int n){
    if (n == 0){
        return 0;
    }
    return n % 10 + func(n / 10);

}

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", func(a));
    return 0;
}
