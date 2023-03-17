#include <stdio.h>

void func(int c){
    if (c != 0){
        func(c - 1);
        printf("%d ", c);
    }
    
}

int main() {
    int n;
    scanf("%d", &n);
    
    func(n);

    return 0;
}
