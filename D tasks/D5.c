#include <stdio.h>

void func(int c){
    if (c != 0){
        func(c / 2);
        printf("%d", c  %2);
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
