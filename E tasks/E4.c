#include <stdio.h>
#define SIZE 10

int main() {
    // Записываем числа из stdin в массив array
    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }

    // Записываем первые два числа в максимумы mx1 и mx2
    int mx1 = array[0], mx2 = array[1];
    if (mx2 > mx1){
        int tmp = mx2;
        mx2 = mx1;
        mx1 = tmp;
    }
    for (int i = 2; i < SIZE; i++)
    {   
       if (array[i] > mx1){
            mx2 = mx1;
            mx1 = array[i];
        } else if (array[i] > mx2){
            mx2 = array[i];
        }

    }
    printf("%d", mx1 + mx2);

    return 0;
}
