#include <stdio.h>
#define SIZE 10

int main() {
    // Записываем числа из stdin в массив array
    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }

    int sm = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (array[i] > 0){
            sm += array[i];
        }
    }
    
    printf("%d", sm);

    return 0;
}
