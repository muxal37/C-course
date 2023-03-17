#include <stdio.h>

int sum(int num) {
    int c;
    while (num > 0){
        c += num % 2;
        num /= 10;
    }
    return (c + 1) % 2;
}


int main() {
    int n;
    scanf("%d", &n);
    
    int out = sum(n);
    if (out == 1){
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
