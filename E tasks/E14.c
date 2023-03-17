#include <stdio.h>
#define SIZE 10

int main() {
    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
    


    int count[1000] = {0};
    for (int i = 0; i < SIZE; i++)
    {
        count[array[i]] += 1;
    }

    int outp[SIZE], c = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (count[i] >= 2) {
            outp[c] = i;
            c++;
        }
    }
    

    for (int i = 0; i < c; i++)
    {
        printf("%d ", outp[i]);
    }
    
    return 0;
}
