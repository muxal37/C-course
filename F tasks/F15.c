int count_bigger_abs(int n, int a[]){
    int max_ind = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[max_ind] < a[i]){
            max_ind = i;
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (-a[i] > a[max_ind]){
            cnt ++;
        }
    }
    return cnt;
}