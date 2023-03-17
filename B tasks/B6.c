#include <stdio.h>

int a;

int main()
{
    scanf("%d", &a);
    int lst = -1;
    while (a != 0)
    {
        int num = a % 10;
        if (num == lst){
            printf("YES");
            return 0;
        }
        lst = num;
        a /= 10;
    }

    printf("NO");
    return 0;
}