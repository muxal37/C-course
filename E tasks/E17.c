#include <stdio.h>
#define SIZE 10

int main() {
    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
    


    int matrix[2][SIZE] = {
        {0},
        {0}
    };
    int c;
    for (int i = 0; i < SIZE; i++)
    {
        c = 0;
        for (int j = 0; j < SIZE; j++)
        {
            if (matrix[0][j] == array[i]){
                matrix[1][j] += 1;
                break;
            }

            if (matrix[1][j] != 0) {
                c = j;
            }
            else {
                matrix[1][j] = 1;
                matrix[0][j] = array[i];
                break;
            }
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        if (matrix[1][i] == 0){
            break;
        } else if (matrix[1][i] == 1) {
            printf("%d ", matrix[0][i]);
        }
    }
    
    
}
