#include <stdio.h> 
#include <string.h>
#define MAX_LENGTH 1000 
 
int main() { 
    FILE* fin = fopen("input.txt", "r"); 
    FILE* fout = fopen("output.txt", "w"); 
 
    char str[MAX_LENGTH]; 
    while(fgets(str, MAX_LENGTH, fin)) {
        char* word = strtok(str, " \n");
        while(word != NULL) {
            fprintf(fout, "%s\n", word);
            word = strtok(NULL, " \n");
        }
    } 
 
    fclose(fin); 
    fclose(fout); 
    return 0; 
}