#include <stdio.h>
#define SIZE 19

unsigned __int128 my_chess(int num)
{
    // просто возводит 2 в степень n - 1
    unsigned __int128 am = 1;
    for (int i = 0; i < num - 1; i++)
    {
        am *= 2;
    }
    return am;
}

int main()
{

    int arr[SIZE];
    int n;
    unsigned __int128 out;

    scanf("%d", &n);
    
    out = my_chess(n);
    // заполняем int-массив цифрами __int128 числа
    for (int i = 0; i < SIZE; i++)
    {
        if (out > 0) {
            arr[SIZE - i - 1] = out % 10;

            out /= 10;
        } else {
            arr[SIZE - i - 1] = -1;
        }
    }
    // выводим эти цифры
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] != -1) {
            printf("%d", arr[i]);
        }
    }
    
    
    
    return 0;
}
