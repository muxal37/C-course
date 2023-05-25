#include <stdio.h>
#define SIZE 10

int main() {
    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
    
    int ind = 0;
    int modif[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        modif[i] = SIZE + 1;
    }
    

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (array[i] == array[j]) {
                int flag = 1;
                for (int k = 0; k < ind; k++)
                {
                    if (array[modif[k]] == array[i]){
                        flag = 0;
                        break;
                    }
                }
                if (flag == 1){
                    modif[ind++] = i;
                }
            }
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        if (modif[i] == SIZE + 1){
            break;
        }
        printf("%d ", array[modif[i]]);
    }
    
    
    
    
    return 0;
}
