#include <stdio.h>
#define SIZE 10

int main() {
    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
    
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (array[j] % 10 < array[i] % 10){
                int tmp = array[j];
                array[j] = array[i];
                array[i] = tmp;
            }
        }
        
    }
    
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
