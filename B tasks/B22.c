#include <stdio.h>
#include <stdint.h>
#define SIZE 32

int main() {
    uint32_t n, k, mx = 0;
    long num[SIZE];
    scanf("%d %d", &n, &k);
    for (int i = 0; i < SIZE; i++)
    {
        num[SIZE - i - 1] = n % 2;
        n /= 2;
    }

    for (int i = 0; i <= SIZE - k; i++)
    {   
        uint32_t sm = 0, mult = 1;
        for (int j = i + k - 1; j >= i; j--)
        {
            sm += mult * num[j];
            mult *= 2;
        }
        if (sm > mx){
            mx = sm;
        }
    }
    printf("%d", mx);
    
    return 0;
}
