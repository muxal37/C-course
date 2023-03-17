#include <stdio.h>
#define SIZE 40

int main() {
    int n;
    scanf("%d", &n);
    int nums[SIZE] = {-1}, c = 0;
    while (n != 0)
    {
        nums[c] = n % 10;
        c ++;
        n /= 10;
    }

    for (int i = c - 1; i > -1; i--)
    {
        printf("%d ", nums[i]);
    }
    
}
