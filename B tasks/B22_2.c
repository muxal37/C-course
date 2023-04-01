#include <stdio.h>

int main() {
    unsigned int n, k, mx = 0;
    scanf("%u %u", &n, &k);

    unsigned int mask = 1;
    for (int i = 0; i < k - 1; i++)
    {
        mask <<= 1;
        mask ++;
    }
    
    while (n != 0){
        unsigned int tmp = mask & n;
        if (tmp > mx){
            mx = tmp;
        }
        k += 1;
        n >>= 1;
    }

    printf("%u ", mx);

    return 0;
}