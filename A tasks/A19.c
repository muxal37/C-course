#include <stdio.h>

int a, b, c, tmp;

int main()
{
    scanf("%d %d %d", &a, &b, &c);
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
    if (a < b + c){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}