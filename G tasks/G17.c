#include <stdio.h>
#define SIZE 1000


int swap_pairs(char string[]){
    int ind = -1;
    char tmp;
    for (int i = 0; i < SIZE; i++)
    {
        if ('a' <= string[i] && string[i] <= 'z' || 'A' <= string[i] && string[i] <= 'Z'){
            if (ind == -1){
                ind = i;
            } else {
                tmp = string[i];
                string[i] = string[ind];
                string[ind] = tmp;
                ind = -1;
            }
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
            input[cnt++] = c;
        } else {
            break;
        }
    }

    fclose(fin);


    swap_pairs(input);

    for (int i = 0; i < SIZE; i++)
    {
        if (input[i]){
            fprintf(fout, "%c", input[i]);
        } else {
            break;
        }
    }
    fclose(fout);
    return 0;
}