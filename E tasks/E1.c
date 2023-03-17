#include <stdio.h>
#define SIZE 5

int main() {
    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }

    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += array[i];
    }
    printf("%.3f", (float) sum / (float) SIZE);

    return 0;
}
