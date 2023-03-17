#include <stdio.h>
#define SIZE 10

int main() {
    int n;
    scanf("%d", &n);
    int countsort[SIZE] = {0};
    for (int i = 2; i < n + 1; i++)
    {
        for (int j = 2; j < SIZE; j++)
        {
            if (i % j == 0){
                countsort[j] += 1;
            }
        }
    }
    
    for (int j = 2; j < SIZE; j++){
        printf("%d %d \n", j, countsort[j]);
    }
    
}
