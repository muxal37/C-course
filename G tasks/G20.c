#include <stdio.h>
#include <string.h>
#define SIZE 1000


int is_palindrom(char string[]){
    int count[128] = {0};

    for (int i = 0; i < SIZE; i++)
    {
        count[string[i]]++;
    }
    

    int flag = 0;
    for (int i = 1; i < 128; i++)
    {
        if (count[i] % 2 == 1){
            if (!flag){
                flag = 1;
            } else {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    FILE* fin = fopen("input.txt", "r");

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
    
    int answer = is_palindrom(input);
    if (answer == 0)
    {
        printf("NO");
    } else {
        printf("YES");
    }
    return 0;
}