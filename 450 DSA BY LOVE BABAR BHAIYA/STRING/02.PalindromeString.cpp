int isPlaindrome(string S)
	{
	    // Your code goes here
	    int l = 0, r = S.size() - 1;
	    while(l < r){
	        if(S[l] == S[r]){
	            l++;
	            r--;
	            continue;
	        }else{
	            return 0;
	        }
	    }
	    return 1;
	}