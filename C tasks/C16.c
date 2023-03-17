#include <stdio.h>

int is_prime(int num) {
    if (num == 1 || num == 0){
        return 0;
    }

    for (long i = 2; i*i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
        
    }
    return 1;
}


int main() {
    int n;
    scanf("%d", &n);
    
    int out = is_prime(n);
    if (out == 1){
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
