#include <stdio.h>

long a;

int main()
{
    scanf("%d", &a);
    for (long i = 10; i < a + 1; i++)
    {   
        long sum = 0, prod = 1, digit, num = i;
        while (num != 0){
            digit = num % 10;
            sum += digit;
            prod *= digit;
            num /= 10;
        }

        if (sum == prod){
            printf("%d ", i);
        }
    }
    
    return 0;
}