#include <stdio.h>
#define SIZE 10

int main() {
    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
    int move_by = 1;
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", array[(i - move_by + SIZE) % SIZE]);
    }
    

    return 0;
}
