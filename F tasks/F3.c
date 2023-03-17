#include <stdio.h>
#define SIZE 20

void sort_even_odd(int n, int a[]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] % 2 == 1 && a[j + 1] % 2 == 0) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}




int main() {

    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
    sort_even_odd(SIZE, array);

    return 0;
}
