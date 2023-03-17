#include <stdio.h>

int main() {
    float n, sm;
    scanf("%f", &n);

    for (float i = 1; i < n; i += .1f)
    {
        sm += i * i;
    }
    printf("%.1f", sm);
    return 0;
}
