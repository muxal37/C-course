#include <stdio.h>

int main()
{
    
    float pow3 = 3, S = 1, prev1 = 2, prev2 = 1, tmp;

    for (int i = 2; i < 100; i += 2)
    {
        if (i % 4){
            S += (i) / ((prev1) * pow3);
        } else {
            S -= (i) / ((prev1) * pow3);
        }
        tmp = prev1;
        prev1 += prev2;
        prev2 = tmp;
        pow3 *= 3;

    }
    printf("%.3f", S);
    return 0;
}