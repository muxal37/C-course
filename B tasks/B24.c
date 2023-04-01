#include <stdio.h>

int main()
{
    
    float pow3 = 3, S = 1;

    for (int i = 2; i < 15; i += 2)
    {
        if (i % 4){
            S += (i) / ((i + 1) * pow3);
        } else {
            S -= (i) / ((i + 1) * pow3);
        }
        pow3 *= 3;

    }
    printf("%.3f", S);
    return 0;
}