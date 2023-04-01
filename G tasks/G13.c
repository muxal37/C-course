#include <stdio.h>
#include <string.h>

int main() {
    FILE* fin = fopen("input.txt", "r");
    FILE* fout = fopen("output.txt", "w");

    char address[100];
    fscanf(fin, "%s", address);

    int ln = strlen(address), dot_ind = -1;

    for (int i = ln - 1; i >= 0; i--) {
        if (address[i] == '.') {
            dot_ind = i;
            break;
        }
        if (address[i] == '/') {
            break;
        }
    }
    if (dot_ind != -1) {
        address[dot_ind] = '\0';
    }
    fprintf(fout, "%s.html", address);


    fclose(fin);
    fclose(fout);
    return 0;
}