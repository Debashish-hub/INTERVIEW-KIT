    int trappingWater(int arr[], int n){
        // Code here
        if(n < 3){
            return 0;
        }
        int r = n-1;
        int l = 0;
        int lmax = 0;
        int rmax = 0;
        int ans = 0;
        while(l <= r){
            if(arr[l] <= arr[r]){
                if(lmax < arr[l]) 
                    lmax = arr[l];
                else 
                    ans+= lmax - arr[l];
                    l++;
            }else{
                if(rmax < arr[r]) 
                    rmax = arr[r];
                else 
                    ans+= rmax - arr[r];
                    r--;
            }
        }
        return ans;
    }