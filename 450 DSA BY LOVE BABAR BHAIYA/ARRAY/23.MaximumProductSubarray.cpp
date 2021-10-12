long long maxProduct(int *arr, int n) {
	    // code here
	    long long ma = arr[0], mi = arr[0], res = arr[0];
	    for(int i=1; i<n; i++){
	        int a = arr[i];
	        if(a < 0){
	            swap(ma,mi);
	        }
	        ma = max<long long int>(a, a*ma);
	        mi = min<long long int>(a, a*mi);
	        
	        res = max(res, ma);
	    }
	    return res;
	}