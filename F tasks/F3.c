#include <stdio.h>
#define SIZE 10

void inc(int count_sort[SIZE]){
    char c = getchar();
    while (c != '\n'){
        count_sort[c - '0'] += 1;
        c = getchar();
    }
}

int main() {
    int out[SIZE] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    inc(out);
    
    for (int i = 0; i < SIZE; i++)
    {
        if (out[i] > 0){
            printf("%d %d\n", i, out[i]);
        }
    }

    return 0;
}
