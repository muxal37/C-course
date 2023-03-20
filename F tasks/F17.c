#include <stdio.h>
#define SIZE 5

int sus(int matrix[SIZE][SIZE], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += matrix[i][i];
    }
    return sum;
}

int main() {
    int inp[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            scanf("%d", &inp[i][j]);
        }
    }
    printf("%d", sus(inp, SIZE));

    return 0;
}
