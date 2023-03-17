#include <stdio.h>
#define SIZE 64

long factorial(long num){
    if (num > 1){
        return factorial(num - 1) * num;
    }
    return 1;
}

int main()
{
    long n;
    scanf("%ld", &n);
    printf("%ld", factorial(n));

    
    // считает количество комбинаций из 2 чисел в наборе из N чисел

    return 0;
}
