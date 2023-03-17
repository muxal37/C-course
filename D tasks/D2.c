#include <stdio.h>

int func(int c){
    if (c == 0){
        return 0;
    }
    return func(c - 1) + c;
}

int main() {
    int n;
    scanf("%d", &n);
    
    printf("%d", func(n));

    return 0;
}
