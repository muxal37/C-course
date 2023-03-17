#include <stdio.h>

int a, b, c, d, e, tmp;

int main()
{
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
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
    

    printf("%d", a);
    return 0;
}