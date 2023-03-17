#include <stdio.h>

int a, mx, num;

int main()
{
    scanf("%d", &a);
    while (a != 0){
        num = a % 10;
        if (num > mx)
            mx = num;
        a /= 10;
    }
    printf("%d", mx);
    return 0;
}