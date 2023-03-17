#include <stdio.h>
#define SIZE 10

int main() {
    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
    int half = SIZE / 2;
    for (int i = 0; i < half; i++)
    {
        for (int j = i + 1; j < half; j++)
        {
            if (array[j] < array[i]){
                int tmp = array[j];
                array[j] = array[i];
                array[i] = tmp;
            }
            if (array[half + j] > array[half + i]){
                int tmp = array[half + j];
                array[half + j] = array[half + i];
                array[half + i] = tmp;
            }
        }
        
    }
    
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
