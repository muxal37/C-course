#include <stdio.h>

void stepan(int n, int am){
    
    for (int i = 0; i < n; i++)
    {
        if (am == 0){
            return;
        }
        am -= 1;
        printf("%d ", n);
    }
    stepan(n + 1, am);
    
}

int main() {
    int k;
    scanf("%d", &k);
    stepan(1, k);
    return 0;
}