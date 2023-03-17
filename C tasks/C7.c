#include <stdio.h>
#define SIZE 64

long my_ss(int num, int base)
{
    int p[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        if (num > 0){
            p[SIZE - i - 1] = num % base;
            num /= base;
        } else {
            p[SIZE - i - 1] = 0;
        }
    }
    long out = 0;    
    int flag = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (p[i] != 0 || flag == 1){
            flag = 1;
            out *= 10;
            out += p[i];
        }
    }
    return out;
    
}

int main()
{
    int n, b;
    scanf("%d %d", &n, &b);
    printf("%ld", my_ss(n, b));

    return 0;
}
