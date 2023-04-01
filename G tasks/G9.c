#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 128

int main() {
    int num = 0;

    FILE* fin = fopen("input.txt", "r");
    FILE* fout = fopen("output.txt", "w");

    char c;
    int count[MAX_LENGTH] = {0};
    while(!feof(fin)) {
        c = fgetc(fin);
        if (c != '\n' && c != -1){
            if (c != ' ' && count[c] == 0){
                fprintf(fout, "%c", c);
                count[c] ++;
            } 
        } else {
            break;
        }
    }


    fclose(fin);
    fclose(fout);
    return 0;
}