int find(int n){
           int count = 0;
           for(int i=5; n/i >= 1; i *=5){
               count += n/i;
           }
           return count;
        }
        int findNum(int n)
        {
        //complete the function here
            int lo = 1, hi = n*5, ans = -1;
            while(lo <= hi){
                int mid = lo + (hi-lo)/2;
                int temp = find(mid);
                if(temp == n){
                    ans = mid;
                    hi = mid-1;
                }else if(temp < n){
                    lo = mid +1;
                }else{
                    hi = mid-1;
                }
            }
        }