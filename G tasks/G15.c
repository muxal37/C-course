#include <stdio.h>
#define SIZE 1001

int main() {
    FILE* fin = fopen("input.txt", "r");
    FILE* fout = fopen("output.txt", "w");

    char sentence[SIZE] = {'\0'};
    fgets(sentence, SIZE, fin);

    for (int i = 0; i < SIZE && sentence[i] != '\0'; i++) {
        if (sentence[i] == 'C' && sentence[i + 1] == 'a' && sentence[i +2 ] == 'o') {
            fprintf(fout, "Ling");
            i += 2;
        } else {
            fprintf(fout, "%c", sentence[i]);
        }
    }
    
    fclose(fin);
    fclose(fout);
    return 0;
}