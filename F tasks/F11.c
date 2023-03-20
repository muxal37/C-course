#include <stdio.h>
#define SIZE 30

void sus(int array[SIZE], int b[2]){
    if (array[1] < array[0]){
        b[0] = 1;
        b[1] = 0;
    } else {
        b[0] = 0;
        b[1] = 1;
    }
    for (int i = 2; i < SIZE; i++)
    {   
       if (array[i] < array[b[0]]){
            b[1] = b[0];
            b[0] = i;
        } else if (array[i] < array[b[1]]){
            b[1] = i;
        }
    }
    if (b[0] > b[1]){
        int tmp2 = b[0];
        b[0] = b[1];
        b[1] = tmp2;
    }
}


int main() {
    int inp[SIZE];
    for (int i = 0; i < SIZE; i++){
        scanf("%d", &inp[i]);
    }
    int out[2];
    sus(inp, out);
    printf("%d %d", out[0], out[1]);

    return 0;
}
