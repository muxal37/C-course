#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char input[MAX_LENGTH] = {0};

    FILE* fin = fopen("input.txt", "r");

    char lets1[128] = {0}, lets2[128] = {0};
    char c;
    int flag = 0;
    while (!feof(fin) ) {
        c = fgetc(fin);
        if (c != '\n' && c != - 1){
            if (c == ' ') {
                flag = 1;
                continue;
            }
            if (!flag){
                lets1[c] += 1;
            } else {
                lets2[c] += 1;
            }
        }
    }
    
    char outp[MAX_LENGTH] = {0};
    int j = 0;
    for (char i = 0; i >= 0; i++)
    {
        if (lets1[i] == 1 && 1 == lets2[i]){
            outp[j++] = i;
            outp[j++] = ' ';
        }
    }
    

    FILE* fout = fopen("output.txt", "w");
    fprintf(fout, "%s", outp);
    fclose(fout);
    return 0;
}