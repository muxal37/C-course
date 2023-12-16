#include <stdio.h>



int main() {
    unsigned int n;
    scanf("%u", &n);
    int count = 1, max, input;
    scanf("%d", &(max));
    for (unsigned int i = 1; i < n; i++) {
        scanf("%d", &(input));
        if (input > max) {
            max = input;
            count = 1;
        } else if (input == max) {
            ++count;
        }
    }
    
    printf("%d", count);

    
    return 0;
}   
