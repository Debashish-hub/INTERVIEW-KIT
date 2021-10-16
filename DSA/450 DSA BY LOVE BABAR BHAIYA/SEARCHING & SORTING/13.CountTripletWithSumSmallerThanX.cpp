long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    sort(arr, arr+n);
	    int count = 0;
	    for(int i=0; i<n-2; i++){
	        int target = sum - arr[i];
	        int l = i+1, r = n-1;
	        while(l < r){
	            if(arr[l] + arr[r] >= target){
	                r--;
	            }else{
	                count += r-l;
	                l++;
	            }
	        }
	    }
	    return count;
	}