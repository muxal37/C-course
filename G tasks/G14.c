#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char input[MAX_LENGTH] = {0};
    FILE* fin = fopen("input.txt", "r");
    FILE* fout = fopen("output.txt", "w");

    char c;
    int i = 0, st1 = 0, st2 = -1, ed1 = -1, ed2 = -1, flag = 0;
    while(!feof(fin)) {
        c = fgetc(fin);
        if ('a' <= c && c <= 'z' || 'A' <= c && c <= 'Z'){
            if (flag && st2 == -1){
                st2 = i;
            }
        } else {
            if (!flag){
                flag = 1;
                ed1 = i;
            } else {
                ed2 = i;
                break;
            }
        }
        input[i++] = c;
    }
    
    fprintf(fout, "Hello, ");
    for (int k = st2; k < ed2; k++)
    {
        fprintf(fout, "%c", input[k]);
    }
    fprintf(fout, " ");
    for (int k = st1; k < ed1; k++)
    {
        fprintf(fout, "%c", input[k]);
    }
    fprintf(fout, "!");
    
    fclose(fin);
    fclose(fout);
    return 0;
}