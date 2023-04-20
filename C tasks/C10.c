#include <stdio.h>
#define SIZE 64

long factors(int* arr, long num){
    int c = 0;
    int d = 2;
    while (num > 1){
        if (num % d == 0){
            num /= d;
            arr[c] = d;
            c += 1;
        } else if (d * d > num) {
            d = num;
        } else {
            d++;
        }
    }
    return 0;
}

int main()
{
    long n;
    scanf("%ld", &n);
    if (n == 1){
        printf("1");
        return 0;
    }
    int out[SIZE] = {0};
    factors(out, n);
    for (int i = 0; i < SIZE; i++)
    {
        if (out[i] == 0){
            break;
        }
        printf("%d ", out[i]);
    }
    
    return 0;
}
