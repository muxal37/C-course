#include <stdio.h>
#define SIZE 1024

int lost(int count_sort[SIZE]){
    for (int i = 0; i < SIZE; i++) {
        count_sort[i] = 0;
    }
    int c;
    scanf("%d", &c);
    while (c != 0) {
        count_sort[c] ++;
        scanf("%d", &c);
    }
    int flag = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (count_sort[i] > 0 && flag == 0){
            flag = 1;
        } else if (count_sort[i] == 0 && flag == 1) {
            return i;
        }
    }
    
}

int main() {
    int out[SIZE];
    printf("%d", lost(out));


    return 0;
}
