#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

int main() {
    char input[MAX_LENGTH] = {0};
    FILE* fin = fopen("input.txt", "r");
    FILE* fout = fopen("output.txt", "w+");

    char c= fgetc(fin), last;
    int i = 0;
    int cnt = 0;
    
    while(!feof(fin)) {
        last = c;
        c = fgetc(fin);
        if (c > 0 && c != '\n'){
            if (last == 'a' && !('a' <= c && c <= 'z' || 'A' <= c && c <= 'Z')){
                cnt ++;
            }
        } else {
            break;
        }
    }
    if (last == 'a'){
        cnt ++;
    }
    fprintf(fout, "%d", cnt);
    fclose(fin);
    fclose(fout);
    return 0;
}