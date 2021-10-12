int minSwap(int *arr, int n, int k) {
    // Complet the function
    int ans , count = 0 , p=0;
    for(int i = 0; i < n ; i++){
        if(arr[i] <= k)
            count++;
    }
    for(int i = 0; i < count ; i++){
        if(arr[i] > k)
            p++;
    }
    ans = p;
    for(int i = 0, j=count; j < n ; i++, j++)
    {
        if(arr[i] >k){
            p--;
        }
        if(arr[j] > k){
            p++;
        }
        ans = min(ans,p);
    }
    
    return ans;
}