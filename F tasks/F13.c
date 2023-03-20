int count_between(int from, int to, int size, int a[]){
    int cnt = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] >= from && a[i] <= to){
            cnt ++;
        }
    }
    return cnt;
}