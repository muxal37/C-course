#include <stdio.h>

int main()
{
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m, d, sm = 0;
    scanf("%d %d", &m, &d);
    for (int i = 11; i >= m - 1; i--)
    {
        sm += months[i];
    }
    sm -= d;
    printf("%d", sm);
    
    
    return 0;
}