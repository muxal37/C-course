#include <stdio.h>

int main() {
    long n, k, mx = 0, c;
    scanf("%ld %ld", &n, &k);
    c = k;
    long mask = 1;
    for (int i = 0; i < k - 1; i++)
    {
        mask <<= 1;
        mask ++;
    }
    
    while (mask <= n << 1){
        long tmp = (mask & n) >> (c - k);
        if (tmp > mx){
            mx = tmp;
        }
        c += 1;
        mask <<= 1;
    }

    printf("%ld ", mx);

    return 0;
}