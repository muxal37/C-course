#include <stdio.h>

int main() {
    FILE* fin = fopen("input.txt", "r");
    FILE* fout = fopen("output.txt", "w");

    char c;
    int cnt = 0;
    while (!feof(fin) ) {
        c = fgetc(fin);
        if (c != - 1){
            if (c == '*'){
                cnt ++;
            }
        } else {
            break;
        }
    }
    fclose(fin);
    int sum = 0, now = 1;
    while (sum < cnt) {
        sum += now++;
    }
    now--;
    if (sum != cnt || cnt == 0) {
        fprintf(fout, "NO");
    } else {
        for (int i = 1; i <= now; i++)
        {
            for (int spaces = 0; spaces < now - i; spaces++)
            {
                fprintf(fout, " ");
            }
            for (int stars = 0; stars < i; stars++)
            {
                fprintf(fout, "* ");
            }
            fprintf(fout, "\n");
        }
        
    }

    fclose(fout);
    return 0;
}