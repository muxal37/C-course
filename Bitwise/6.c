#include <stdio.h>


int main() {
    unsigned int input, count = 0;
    scanf("%u", &input);

    while (input != 0) {
        count += input & 1;
        input >>= 1;
    }
    
    
    
    printf("%u", count);

    return 0;
}   