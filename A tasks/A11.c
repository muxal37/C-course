#include <stdio.h>

int a, b, c, d, e, tmp, min;

int main()
{
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (b < a){
        tmp = a;
        a = b;
        b = tmp;
    }
    if (c < a){
        tmp = a;
        a = c;
        c = tmp;
    }
    if (d < a){
        tmp = a;
        a = d;
        d = tmp;
    }
    if (e < a){
        tmp = a;
        a = e;
        e = tmp;
    }

    min = a;

    if (b > a){
        tmp = a;
        a = b;
        b = tmp;
    }
    if (c > a){
        tmp = a;
        a = c;
        c = tmp;
    }
    if (d > a){
        tmp = a;
        a = d;
        d = tmp;
    }
    if (e > a){
        tmp = a;
        a = e;
        e = tmp;
    }
    

    printf("%d", a + min);
    return 0;
}   