string Solution::convertToTitle(int A) {
    string ans;
    while(A){
        ans = ans + char((A-1) % 26 + 'A');
        A = (A-1)/26;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

