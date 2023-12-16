#include <stdio.h>


int main() {
    unsigned int input, mask = 0, max = 0, num;
    int k;
    scanf("%u %d", &input, &k);

    for (int i = 0; i < k; i++) {
        mask <<= 1;
        mask ++;
    }
    
    for (int i = 0; i < 32 - k + 1 && input != 0; i++)
    {
        num = mask & input;
        // printf("%u %u %u\n", mask, input, num);
        max = num > max ? num: max;
        input >>= 1;
    }
    
    
    printf("%u", max);

    return 0;
}   