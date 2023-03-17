#include <stdio.h>

int main() {
    unsigned int low, high, tmp;
    scanf("%u %u", &low, &high);
    if (low > high){
        tmp = high;
        high = low;
        low = tmp;
    }
    for (unsigned int i = low; i <= high; i++)
    {
        printf("%u ", i * i * i);
    }
    return 0;
}
