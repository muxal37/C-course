#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    int num = 0;

    FILE* fin = fopen("input.txt", "r");

    char c;
    int i = 0;

    while(!feof(fin)) {
        c = fgetc(fin);
        if (c != '\n' && c != - 1){
            num *= 10;
            num += c - '0';
        }
    }

    char outp[MAX_LENGTH] = {0};
    char nums[4] = {'2', '4', '6', '8'};
    for (int i = 0; i < num / 2; i++)
    {
        outp[i * 2] = 'A' + i;
        outp[i * 2 + 1] = nums[i % 4];
    }
    
    
    FILE* fout = fopen("output.txt", "w");
    fprintf(fout, "%s", outp);
    fclose(fout);
    return 0;
}