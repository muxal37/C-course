#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char input[MAX_LENGTH] = {0};

    FILE* fin = fopen("input.txt", "r");

    char outp[MAX_LENGTH] = {0};
    int i = 0;

    char c;
    while (!feof(fin)) {
        c = fgetc(fin);
        if (c != '\n' && c != - 1){
            switch (c)
            {
            case 'a':
                outp[i++] = 'b';
                break;
            case 'b':
                outp[i++] = 'a';
                break;
            case 'A':
                outp[i++] = 'B';
                break;
            case 'B':
                outp[i++] = 'A';
                break;
            default:
                outp[i++] = c;
                break;
            }
        } else {
            break;
        }
    }
    
    

    FILE* fout = fopen("output.txt", "w");
    fprintf(fout, "%s", outp);
    fclose(fout);
    return 0;
}