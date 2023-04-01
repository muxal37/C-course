#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

int main() {
    char input[MAX_LENGTH] = {0};

    FILE* fin = fopen("input.txt", "r");

    char c;
    int i = 0;
    while(!feof(fin)) {
        c = fgetc(fin);
        if (c != '\n' && c != - 1){
            input[i++] = c;
        } else {
            break;
        }
    }
    i--;
    FILE* fout = fopen("output.txt", "w");
    for (int cnt = 0; cnt < (i + 1) / 2; cnt++)
    {
        if (input[cnt] != input[i - cnt]){
            fprintf(fout, "NO");
            fclose(fout);
            return 0;
        }
    }
    
    fprintf(fout, "YES");
    fclose(fout);
    return 0;
}