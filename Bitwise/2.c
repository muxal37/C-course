#include <stdio.h>



int main() {
    int n, alph_len = 'z' - 'a' + 1;
    scanf("%d ", &n);
    char c;
    while ((c = getchar()) != '.') {
        if ('a' <= c && c <= 'z'){
            c = (c - 'a' + n) % alph_len + 'a';
        } else if ('A' <= c && c <= 'Z') {
            c = (c - 'A' + n) % alph_len + 'A';
        }
        putchar(c);
    }
    putchar('.');
    
    
    

    
    return 0;
}   