#include <stdio.h>

void stepan(){
    int inp;
    scanf("%d", &inp);
    if (inp == 0){
        return;
    }
    if (inp % 2 != 0){
        printf("%d ", inp);
    }
    stepan();
}

int main() {
    stepan();
    return 0;
}