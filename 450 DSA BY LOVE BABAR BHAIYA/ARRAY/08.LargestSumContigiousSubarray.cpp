

int maxSubarraySum(int arr[], int n){
        
    // Your code here
    int res = arr[0], m = arr[0];
    for(int i=1; i<n; i++){
        m = max(arr[i], m+arr[i]);
        res = max(m, res);
    }
    return res;
}