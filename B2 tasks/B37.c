#include <stdio.h>

int main()
{
    long months[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    long m, d, sm = 0;
    scanf("%d %d", &m, &d);
    for (long i = 11; i >= m - 1; i--)
    {
        sm += months[i];
    }
    sm -= d;
    printf("%ld", sm);
    
    
    return 0;
}