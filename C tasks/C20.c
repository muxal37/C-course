#include <stdio.h>

int main() {
    char c;
    int k = 0;
    while ((c = getchar()) != EOF) {
        if (c == '.') {
            break;
        } else if (c == '(') {
            k++;
        } else {
            k--;
        }
        if (k < 0){
            printf("NO");
            return 0;
        }
    }
    if (k != 0){
        printf("NO");
    } else {
        printf("YES");
    }

    return 0;
}
