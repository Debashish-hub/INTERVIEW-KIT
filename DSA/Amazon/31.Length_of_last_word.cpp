int Solution::lengthOfLastWord(const string A) {
    int n = A.length();
    int ans = 0;
    int x = 0;
    while(A[x] != ' ' && A[x] != '\0'){
        x++;
    }
    if(x == n){
        return n;
    }
    int y = n-1;
    while(A[y] == ' '){
        y--;
    }
    for(int i = y; A[i] != ' ' && i >= 0; i--){
        ans++;
    }
    return ans;
}
