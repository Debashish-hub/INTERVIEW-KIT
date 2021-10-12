//Allocate Minimum Pages Problem
bool isFeasible(int arr[],int n,int k, int ans){
        int req=1,sum=0;
        for(int i=0;i<n;i++){
            if(sum+arr[i]>ans){
                req++;
                sum=arr[i];
            }
            else{
                sum+=arr[i];
            }
        }
        return (req<=k);
    }
    
    int findPages(int arr[],int n, int k){
        int sum=0,mx=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            mx=max(mx,arr[i]);
        }
        int low=mx,high=sum,res=0;
        
        while(low<=high){
            int mid=(low+high)/2;
            if(isFeasible(arr,n,k,mid)){
                res=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return res;
    }

//Painter's Partition problem

int getMax(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}
 
int getSum(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];
    return total;
}
 
int numberOfPainters(int arr[], int n, int maxLen)
{
    int total = 0, numPainters = 1;
 
    for (int i = 0; i < n; i++) {
        total += arr[i];
 
        if (total > maxLen) {
 
            total = arr[i];
            numPainters++;
        }
    }
 
    return numPainters;
}
 
int partition(int arr[], int n, int k)
{
    int lo = getMax(arr, n);
    int hi = getSum(arr, n);
 
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        int requiredPainters = numberOfPainters(arr, n, mid);
 
        if (requiredPainters <= k)
            hi = mid;
 
        else
            lo = mid + 1;
    }
 
    return lo;
}