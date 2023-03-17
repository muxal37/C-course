#include <stdio.h>

int a;

int main()
{
    scanf("%d", &a);
    int c = 0;
    while (a != 0)
    {
        if (a % 2 == 1){
                printf("NO");
                return 0;
        }
        
        a /= 10;
    }

    printf("YES");
    return 0;
}