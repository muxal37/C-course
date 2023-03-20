#include <stdio.h>
#define SIZE 10

int prod_dec(int num, int even_odd){
    int prod = 1, dec;
    while (num > 0) {
        if (num % 2 == even_odd){
            prod *= num % 10;
        }
        num /= 10;
    }
    return prod;
}

int main() {
    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
    int cnt = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (array[i] % 2 == 0){
            cnt ++;
        } else {
            cnt --;
        }
    }

    if (cnt > 0){
        for (int i = 0; i < SIZE; i++)
        {
            if (array[i] % 2 == 1){
                array[i] = prod_dec(array[i], 1);
            }
        } 
    } else {
        for (int i = 0; i < SIZE; i++)
        {
            if (array[i] % 2 == 0){
                array[i] = prod_dec(array[i], 0);
            }
        } 
    }
    
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }
    

    return 0;
}
