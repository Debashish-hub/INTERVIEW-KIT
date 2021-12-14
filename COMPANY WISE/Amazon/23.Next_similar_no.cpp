string Solution::solve(string A) {
    for(int i=A.size()-1; i>0; i--){
        if(A[i-1]<A[i]){
            int index = i-1;
            reverse(A.begin()+index+1, A.end());
            for(int j = index+1; j<A.size(); j++){
                if(A[j]>A[index]){
                    swap(A[index],A[j]);
                    return A;
                }
            }
        }
    }
    return "-1";
}
