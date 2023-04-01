#include <stdio.h>
#define SIZE 1000


int make_palindrom(char string[], char outp[]){
    int count[128] = {0};

    for (int i = 0; i < SIZE; i++)
    {
        if (string[i]){
            count[string[i]]++;
        }
    }
    int ind = 0;
    for (char i = 0; i > -1 && i < 128; i++)
    {
        while (count[i] / 2 != 0){
            outp[ind] = i;
            outp[SIZE * 2 - ind - 1] = i;
            ind++;
            count[i] -= 2;
        }
        if (!outp[SIZE] && count[i] == 1){
            outp[SIZE] = i;
        }
    }
    
    return 1;
}

int main() {
    FILE* fin = fopen("input.txt", "r");
    FILE* fout = fopen("output.txt", "w");

    char input[SIZE] = {0};
    char c;
    int cnt = 0;
    while (!feof(fin) ) {
        c = fgetc(fin);
        if (c != '\n' && c != - 1){
            if ('a' <= c && c <= 'z'){
                input[cnt++] = c;
            }
        } else {
            break;
        }
    }
    fclose(fin);
    char out[SIZE * 2 + 1] = {0};

    make_palindrom(input, out);
    for (int i = 0; i < SIZE * 2 + 1; i++)
    {
        if (out[i]){
            fprintf(fout, "%c", out[i]);
        }
    }
    fclose(fout);
    return 0;
}