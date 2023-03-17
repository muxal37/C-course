#include <stdio.h>
#define SIZE 10

int main() {
    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
    int half = SIZE / 2;
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", array[half * (i / half + 1) - 1 - i % half]);
    }
    

    return 0;
}
