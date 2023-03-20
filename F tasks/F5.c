 int find_max_array(int size, int a[]){
    int mx = a[0];
    for (int i = 1; i < size; i++)
    {
        if (mx < a[i]){
            mx = a[i];
        }
    }
    return mx;
 }