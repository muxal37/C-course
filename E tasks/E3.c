#include <stdio.h>
#define SIZE 10

int main() {
    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }

    int mn = array[0], mx = array[0], mn_ind = 1, mx_ind = 1, flag = 0;
    for (int i = 1; i < SIZE; i++)
    {   
        if (array[i] < mn){
            mn = array[i];
            mn_ind = i + 1;
        }
        if (array[i] > mx){
            mx = array[i];
            mx_ind = i + 1;
        }
    }
    printf("%d %d %d %d", mx_ind, mx, mn_ind, mn);

    return 0;
}
