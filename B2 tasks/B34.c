#include <stdio.h>



int main()
{
    long num, fact = 1;
    scanf("%d", &num);
    for (long i = 2; i <= num; i++)
    {
        fact *= i;
    }
    
    printf("%ld", fact);
    
    return 0;
}