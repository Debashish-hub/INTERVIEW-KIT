int Solution::solve(string A) {
    int n = A.length();
    int l = 0, h = n-1;
    bool flag = false;
    while(l <h ){
        if(A[l] != A[h ]){
            if(flag)    
                return 0;
            flag = true;
            if(A[l+1] == A[h]) 
                l++;
            else if(A[h-1] == A[l])
                h--;
            else 
                return 0;
        }
        l++;
        h--;
    }
    return 1;
}
