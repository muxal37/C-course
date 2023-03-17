#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    scanf("%d", &num);

    while (num > 0) {
        sum += num%10;
        num /= 10;
    }
    if (sum == 10)
    {
        printf("YES");
        return 0;
    }
    printf("NO");
    return 0;
}