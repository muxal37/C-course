#include <stdio.h>

void func(int low, int up, int d){
    if (low != up){
        printf("%d ", low);
        func(low + d, up, d);
    } else {
        printf("%d ", low);
        return;
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b){
        int w = -1;
        func(a, b, w);
    } else {
        int w = 1;
        func(a, b, w);
    }
    

    return 0;
}
