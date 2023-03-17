#include <stdio.h>
#define SIZE 10

int main() {
    int n;
    scanf("%d", &n);
    int countsort[SIZE] = {0};
    while (n != 0) {
        countsort[n % 10] += 1;
        n /= 10;
    }
    for (int i = 9; i > -1; i--){
        for (int j = 0; j < countsort[i]; j++)
        {
            printf("%d", i);
        }
    }
}