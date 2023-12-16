#include <stdio.h>



int main() {
    unsigned int input, mask = 0;
    int k;
    scanf("%u %d", &input, &k);

    for (int i = 0; i < k; i++)
    {
        mask <<= 1;
        mask ++;
    }
    
    printf("%u", input & mask);

    return 0;
}   