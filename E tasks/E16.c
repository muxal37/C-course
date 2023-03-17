#include <stdio.h>
#define SIZE 10

int main() {
    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }

    int count[1000] = {0}, mx, mx_cnt = 0;
    for (int i = 0; i < SIZE; i++)
    {
        count[array[i]] += 1;
        if (count[array[i]] > mx_cnt) {
            mx_cnt = count[array[i]];
            mx = array[i];
        }
    }
    
    printf("%d", mx);
    
    
    return 0;
}