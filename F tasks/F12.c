void change_max_min(int size, int a[]){
    int min_ind = 0, max_ind = 0;
    for (int i = 1; i < size; i++)
    {
        if (a[min_ind] > a[i]){
            min_ind = i;
        }
        if (a[max_ind] < a[i]){
            max_ind = i;
        }
    }
    int tmp = a[min_ind];
    a[min_ind] = a[max_ind];
    a[max_ind] = tmp;
}