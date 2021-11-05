int Solution::firstMissingPositive(vector<int> &A) {
    int n = A.size();
        for(int i=0; i<n; i++){
            if(i+1==A[i]) continue;
            int temp = A[i];
            while(temp >= 1 && temp <= n && temp != A[temp-1]){
                swap(temp, A[temp-1]);
            }
        }
        for(int i=0; i<A.size(); i++){
            if(i+1!=A[i])    
                return i+1;
        }
        return n+1;
}
