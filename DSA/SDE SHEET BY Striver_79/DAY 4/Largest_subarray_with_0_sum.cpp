int maxLen(int A[], int n)
{
    // Your code here
    unordered_map<int,int> mp;
    int m = 0, sum = 0;
    for(int i=0; i<n; i++){
        sum += A[i];
        if(sum == 0){
            m = i+1;
        }else{
            if(mp.find(sum) != mp.end()){
               m  = max(m, i - mp[sum]); 
            }else{
                mp[sum] = i;
            }
        }
        
    }
    return m;
}
