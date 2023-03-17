#include <stdio.h>
#include <stdint.h>


int main()
{
    unsigned int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    uint32_t x = (((((uint32_t) d << 8) | c) << 8) | b) << 8 | a;
    printf("%u", x);
    return 0;
}