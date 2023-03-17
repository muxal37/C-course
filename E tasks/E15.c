#include <stdio.h>
#define SIZE 10

int main() {
    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }

    int pos[SIZE], cp = 0;
    int neg[SIZE], cn = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (array[i] > 0){
            pos[cp] = array[i];
            cp++;
        } else if (array[i] < 0) {
            neg[cn] = array[i];
            cn++;
        }
    }
    

    for (int i = 0; i < cp; i++)
    {
        printf("%d ", pos[i]);
    }

    for (int i = 0; i < cn; i++)
    {
        printf("%d ", neg[i]);
    }
    
    return 0;
}
