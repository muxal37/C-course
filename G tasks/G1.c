#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100 + 1


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
    
    FILE* fout = fopen("output.txt", "w");
    fprintf(fout, "%s, %s, %s %d\n", input, input, input, i);
    fclose(fout);
    return 0;
}