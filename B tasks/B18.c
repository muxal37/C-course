#include <stdio.h>



int main()
{
    int num, a = 1, b = 1, tmp;
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("1");
        break;
    
    case 2:
        printf("1 1");
        break;
    
    default:
        printf("1 1 ");
        for (int i = 0; i < num - 2; i++)
        {
            printf("%d ", a + b);
            tmp = a + b;
            a = b;
            b = tmp;
        }
        break;
    }
    
    
    return 0;
}