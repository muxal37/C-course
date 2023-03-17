#include <stdio.h>

int my_sum(int num)
{
    return num * (num + 1) / 2;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", my_sum(n));
    
    // считает количество комбинаций из 2 чисел в наборе из N чисел

    return 0;
}
