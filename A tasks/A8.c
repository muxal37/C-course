#include <stdio.h>

int a, b, c;

int main()
{
    scanf("%d %d %d", &a, &b, &c);
    if (a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    if (b > c){
        int tmp = b;
        b = c;
        c = tmp;
    }
    if (a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }

    printf("%d", c);
    return 0;
}