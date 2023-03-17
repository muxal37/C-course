#include <stdio.h>
#define SIZE 10

int main() {
    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
    int outp[SIZE];
    int c = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if ((array[i] % 100) / 10 == 0){
            outp[c] = array[i];
            c += 1;
        }
    }
    for (int i = 0; i < c; i++)
    {
        printf("%d ", outp[i]);
    }
    
    return 0;
}
