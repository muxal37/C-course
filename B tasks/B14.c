#include <stdio.h>

int main() {
    int number, count = 0;

    // Читаем числа, пока не получим 0
    while (1) {
        scanf("%d", &number);
        if (number == 0) {
            break;
        }
        count++;
    }

    // Выводим результат
    printf("%d", count);

    return 0;
}