#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10000

int main() {
    FILE* fin = fopen("input.txt", "r");

    int lower = 0, higher = 0;
    char c;
    while(!feof(fin)) {
        c = fgetc(fin);
        if (c != '\n' && c != - 1){
            if ('a' <= c && c <= 'z'){
                lower ++;
            } else if ('A' <= c && c <= 'Z')
            {
                higher ++;
            }
            
        } else {
            break;
        }
    }
    
    FILE* fout = fopen("output.txt", "w");
    fprintf(fout, "%d %d", lower, higher);
    fclose(fout);
    return 0;
}