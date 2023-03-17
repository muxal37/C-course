#include <stdio.h>
#define SIZE 10

int main() {
    int num;
    scanf("%d", &num);
    int digits[SIZE] = { 0 };

    while (num != 0){
        int digit = num % 10;
        num /= 10;
        digits[digit] += 1;
    }

    for (int i = 0; i < SIZE; i++)
    {
        if (digits[i] > 1)
        {
            printf("%d ", i);
        }
        
    }
    
    return 0;
}