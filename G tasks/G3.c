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
        }
    }

    char outp[MAX_LENGTH] = {0};
    int j = 0;
    for (int let = 0; let < i - 1; let++)
    {
        if (input[let] == input[i - 1]){
            outp[j++] = '0' + let;
            outp[j++] = ' ';
        }
    }
    
    FILE* fout = fopen("output.txt", "w");
    fprintf(fout, "%s", outp);
    fclose(fout);
    return 0;
}