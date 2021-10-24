int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr, arr+n);
    	sort(dep, dep+n);
    	int x = 1, y = 0, ans =1;
    	while(x < n && y < n){
    	    if(arr[x] > dep[y]){
    	        x++; y++;
    	    }else if(arr[x] <= dep[y]){
    	        ans++;
    	        x++;
    	    }
    	}
    	return ans;
    }