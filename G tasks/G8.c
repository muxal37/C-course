#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

int main() {
    int num = 0;

FILE* fin = fopen("input.txt", "r");

    char c;
    int i = 0;

    int outp[MAX_LENGTH] = {0};
    int flag = 0, neg = 0;
    while(!feof(fin)) {
        c = fgetc(fin);
        if (c != '\n' && c != -1){
            if ('0' <= c && c <= '9')
            {
                flag = 1;
                num *= 10;
                num += c - '0';
            } else if (c == '-') {
                neg = 1;
            } else {
                if (flag == 1){
                    if (neg == 1){
                        outp[i++] = -num;
                    } else {
                        outp[i++] = num;
                    }
                }
                neg = 0;
                flag = 0;
                num = 0;
            }
        } else {
            break;
        }
    }

    if (flag == 1){
        if (neg == 1){
            outp[i++] = -num;
        } else {
            outp[i++] = num;
        }
    }

    int tmp;
    for (int a = 0; a < i; a++)
    {
        for (int b = a; b < i; b++)
        {
            if (outp[a] > outp[b]){
                tmp = outp[a];
                outp[a] = outp[b];
                outp[b] = tmp;
            }
        }
    }
    
    FILE* fout = fopen("output.txt", "w");
    for (int k = 0; k < i; k++)
    {
        fprintf(fout, "%d ", outp[k]);
    }
    
    fclose(fout);
    return 0;
}