#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

int main() {
    char input[MAX_LENGTH] = {0};
    FILE* fin = fopen("input.txt", "r");
    FILE* fout = fopen("output.txt", "w+");

    char c;
    int i = 0;
    int mx = 0, mxi = 0, st = 0, now = 0;
    while(!feof(fin)) {
        c = fgetc(fin);
        if (c > 0 && c != '\n'){
            if ('a' <= c && c <= 'z' || 'A' <= c && c <= 'Z'){
                if (now == 0){
                    st = i;
                }
                now ++;
            } else {
                if (now > mx){
                    mx = now;
                    mxi = st;
                }
                now = 0;
            }
            input[i++] = c;
        } else {
            break;
        }
    }
    if (now > mx){
        mx = now;
    }

    for (int k = mxi; k < mxi + mx; k++)
    {

        fprintf(fout, "%c", input[k]);

    }
    
    fclose(fin);
    fclose(fout);
    return 0;
}