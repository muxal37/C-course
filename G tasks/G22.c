#include <stdio.h>
#define SIZE 20

int main() {
    FILE* fin = fopen("input.txt", "r");
    FILE* fout = fopen("output.txt", "w");


    char str[20] = {0};
    fscanf(fin, "%s", str);
    for (int i = 1; i < SIZE; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'h' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u' || str[i] == 'w' || str[i] == 'y'){
            str[i] = 0;
        }
    }

    for (int i = 1; i < SIZE; i++)
    {
        if (str[i] == 'b' || str[i] == 'f' || str[i] == 'p' || str[i] == 'v'){
            str[i] = '1';
        } else if (str[i] == 'c' || str[i] == 'g' || str[i] == 'j' || str[i] == 'k' || str[i] == 'q' || str[i] == 's' || str[i] == 'x' || str[i] == 'z') {
            str[i] = '2';
        } else if (str[i] == 'd' || str[i] == 't'){
            str[i] = '3';
        } else if (str[i] == 'l'){
            str[i] = '4';
        } else if (str[i] == 'm' || str[i] == 'n'){
            str[i] = '5';
        } else if (str[i] == 'r'){
            str[i] = '6';
        } 
    }

    char last = '0';
    for (int i = 0; i < SIZE; i++)
    {
        if ('0' <= str[i] && str[i] <= '9'){
            if (last == str[i]){
                str[i] = 0;
            } else {
                last = str[i];
            }
        }
    }


    int cnt = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (str[i]){
            fprintf(fout, "%c", str[i]);
            cnt ++;
        }
        if (cnt == 4){
            break;
        }
    }

    for (int i = 0; i < 4 - cnt; i++)
    {
        fprintf(fout, "0");
    }
    
    fclose(fin);
    fclose(fout);
    return 0;
}