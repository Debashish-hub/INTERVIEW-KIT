int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    int dp[n];
	    dp[0] = arr[0];
	    int ans = arr[0];
	    for(int i=1; i<n; i++){
	        int m = INT_MIN;
	        for(int j=0; j<i; j++){
	            if(arr[j] < arr[i]){
	                m = max(m , dp[j]);
	            }
	        }
	        if(m != INT_MIN)
	            dp[i] = arr[i] + m;
	        else
	            dp[i] = arr[i];
	            
	        ans = max(ans, dp[i]); 
	    }
	    return ans;
	}  