#include <stdio.h>
#define SIZE 12

int main() {
    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
    int third = SIZE / 3;
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", array[third * (i / third + 1) - 1 - i % third]);
    }
    

    return 0;
}
