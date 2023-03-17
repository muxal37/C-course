#include <stdio.h>

int _x1, _y1, _x2, _y2;
float k, b;

int main()
{
    scanf("%d %d %d %d", &_x1, &_y1, &_x2, &_y2);
    k = (_y2 - _y1) / ((_x2 - _x1) * 1.0);
    b = _y1 - k * _x1;
    printf("%.2f %.2f", k, b);
    return 0;
}