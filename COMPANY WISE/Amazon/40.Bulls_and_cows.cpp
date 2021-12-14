string Solution::solve(string A, string B) {
    int bull=0;
    int arr[10]={0};
    for(int i=0;i<A.size();i++) {
        if(A[i]==B[i]) 
            arr[B[i]-'0']--, bull++;
        arr[B[i]-'0']++;
    }
    int cow=0;
    int j=0;
    for(auto i: A) {
        if(i!=B[j++] && arr[i-'0']>0) 
            cow++, arr[i-'0']--;
    }
    string s=to_string(bull) + "A" + to_string(cow) + "B";
    return s;
}
