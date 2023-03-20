void print_digit(char s[]){
    int i = 0;
    int count_sort[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while (s[i] != '.')
    {
        if (s[i] >= '0' && s[i] <= '9'){
            count_sort[s[i] - '0'] += 1;
        }
        i++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (count_sort[i] > 0){
            printf("%d %d\n", i, count_sort[i]);
        }
    }
}   