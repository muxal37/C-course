#include <stdio.h>

int mm;

int main()
{
    scanf("%d", &mm);
    if (mm < 3 || mm == 12){
        printf("winter");
    }
    else {
        if (mm < 6){
            printf("spring");
        }
        else{
            if (mm < 9){
                printf("summer");
            }
            else{
                printf("autumn");
            }
        }
    }

    return 0;
}
