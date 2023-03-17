#include <stdio.h>

int func(int c){
    if (c == 0){
        return 0;
    }
    printf("%d ", c % 10);
    func(c / 10);
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
