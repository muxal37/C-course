#include <stdio.h>

int a;

int main()
{
    scanf("%d", &a);
    int c = 0;
    while (a != 0)
    {
        if (a % 10 == 9){
            c += 1;
            if (c == 2){
                printf("NO");
                return 0;
            }
        }
        
        a /= 10;
    }
    if (c == 1){
        printf("YES");
        return 0;
    }
    printf("NO");
    return 0;
}