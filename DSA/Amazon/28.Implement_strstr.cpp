int Solution::strStr(const string A, const string B) {
    if(B.size() == 0) return 0;
    unordered_map<char, int>m;
    for(auto x: B) m[x]++;
    int count = B.size();
    int begin = 0, end = 0;
    while(end < A.size()){
        if(m[A[end++]]-- > 0) count--;
        if(count == 0){
            int i = begin, j = 0;
            while(j < B.size() && A[i] == B[j]) i++, j++;
            if(j == B.size()) return begin;
        }
        if(end - begin == B.size() && m[A[begin++]]++ >= 0) count++;
    }
    return -1;
}
