#include <stdio.h>
#define SIZE 5

int main() {
    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }

    int mn = 0, flag = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (flag == 0 || array[i] < mn){
            flag = 1;
            mn = array[i];
        }
    }
    printf("%d", mn);

    return 0;
}
