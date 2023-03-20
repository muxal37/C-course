void swap_negmax_last(int size, int a[]){
    int mx = 0, mx_ind = -1;
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0 && (mx_ind == -1 || a[i] > mx)) {
            mx = a[i];
            mx_ind = i;
        }
    }
    if (mx_ind != -1){
        int tmp = a[size - 1];
        a[size - 1] = a[mx_ind];
        a[mx_ind] = tmp;
    }
}