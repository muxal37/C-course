#include <stdio.h>
#define SIZE 10

int sus(int matrix[SIZE][SIZE], int size){
    int sum = 0, max;
    for (int i = 0; i < size; i++)
    {
        max = matrix[i][0];
        for (int j = 1; j < size; j++)
        {
            if (matrix[i][j] > max){
                max = matrix[i][j];
            }
        }
        sum += max;
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
