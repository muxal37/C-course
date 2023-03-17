#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    if (m < 2) {
        m = 2;
    }
    int nums[n + 1];
    for (int i = 2; i <= n; i++) {
        nums[i] = 1;
    }
    for (int i = 2; i * i <= n; i++) {
        if (nums[i] == 1) {
            for (int j = i * i; j <= n; j += i) {
                nums[j] = 0;
            }
        }
    }
    int flag = 0;
    for (int i = m; i <= n; i++) {
        if (nums[i] == 1) {
            flag = 1;
            printf("%d ", i);
        }
    }
    if (flag == 0){
        printf("0");
    }
    return 0;
}