#include <stdio.h>

void func(int c){
    if (c != 0){
        printf("%d ", c);
        func(c - 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    func(n);

    return 0;
}
