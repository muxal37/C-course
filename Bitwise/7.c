#include <stdio.h>


int main() {
    unsigned int input, mask = 255 << 24;
    scanf("%u", &input);

    
    printf("%u", input ^ mask);

    return 0;
}   