#include <stdio.h>
#define PI 3.1415926535

float pow(float das, int exp) {
    float outp = 1.0;
    while (exp > 0){
        if (exp & 1){
            outp *= das;
        }
        das *= das;
        exp >>= 1;
    }
    return outp;
}

float sin(float num){
    float res = 0.0;
    float rad = num * PI / 180;
    long fact = 1;
    int flag = 0;
    for (int i = 1; i < 20; i+=2)
    {
        if (flag == 0)
        {
            flag = 1;
            res += pow(rad, i) / fact;
        } else {
            flag = 0;
            res -= pow(rad, i) / fact;
        }
        fact *= (i + 1) * (i + 2);
    }
    return res;
}

int main()
{
    float n;
    scanf("%f", &n);
    printf("%.3f", sin(n));
    return 0;
}
