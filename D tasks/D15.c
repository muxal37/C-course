#include <stdio.h>

int max_find(int max){
    int inp;
    scanf("%d", &inp);
    if (inp == 0){
        return max;
    }
    if (max == 0 || inp > max){
        max = inp;
    }

    return max_find(max);
}

int main() {
    int mx = max_find(0);
    printf("%d", mx);
    return 0;
}