int compression(int a[], int b[], int N){
    int cnt = 1, x = 0;
    if (a[0] == 1){
        b[0] = 0;
        x ++;
    }
    for (int i = 1; i < N; i++)
    {
        if (a[i] != a[i - 1]){
            b[x] = cnt;
            cnt = 1;
            x ++;
        } else {
            cnt ++;
        }
    }
    b[x] = cnt;
    return x + 1;
}   
