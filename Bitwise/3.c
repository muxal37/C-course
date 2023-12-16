#include <stdio.h>



int main() {
    unsigned int input;
    int k;
    scanf("%u %d", &input, &k);

    printf("%u", (input >> k) | (input << (32 - k)));

    return 0;
}   