#include <stdio.h>

int acounter(void){
    char inp = getchar();
    switch (inp)
    {
    case '.':
        return 0;
        break;
    case 'a':
        return 1 + acounter();
        break;
    default:
        return acounter();
        break;
    }
}

int main() {
    printf("%d", acounter());
}
