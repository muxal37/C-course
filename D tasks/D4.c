#include <stdio.h>

void func(int c){
    if (c != 0){
        func(c / 10);
        printf("%d ", c % 10);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    if (n == 0){
        printf("0");
    } else {
        func(n);
    }
    

    return 0;
}
