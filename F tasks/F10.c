#include <stdio.h>

void compression(){
    char last = getchar();
    char a = getchar();
    int cnt = 1;
    while (a != '.'){
        if (a != last){
            putchar(last);
            printf("%d", cnt);
            cnt = 1;
        } else {
            cnt ++;
        }
        last = a;
        a = getchar();
    }
    putchar(last);
    printf("%d", cnt);
}   


int main() {

    compression();

    return 0;
}
