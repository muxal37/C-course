#include <stdio.h>

int main() {
    unsigned long num;
    scanf("%ld", &num);

    if (num == 1){
        printf("NO");
        return 0;
    }
    

    for (long i = 2; i*i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("NO");
            return 0;
        }
        
    }
    
    printf("YES");
    return 0;
}
