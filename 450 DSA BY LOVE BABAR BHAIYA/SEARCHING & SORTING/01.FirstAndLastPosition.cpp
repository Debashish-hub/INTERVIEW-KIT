int first(int arr[], int low, int high, int x, int n){
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
            return mid;
        else if (x > arr[mid])
            return first(arr, (mid + 1), high, x, n);
        else
            return first(arr, low, (mid - 1), x, n);
    }
    return -1;
}
int last(int arr[], int low, int high, int x, int n){
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == n - 1 || x < arr[mid + 1]) && arr[mid] == x)
            return mid;
        else if (x < arr[mid])
            return last(arr, low, (mid - 1), x, n);
        else
            return last(arr, (mid + 1), high, x, n);
    }
    return -1;
}
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> ans;
    ans.push_back(first(arr, 0, n-1, x ,n));
    ans.push_back(last(arr, 0, n-1, x ,n));
    return ans;
}