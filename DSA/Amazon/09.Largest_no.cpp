static bool compr(string X,string Y){
    return (X+Y)>(Y+X);
}
string Solution::largestNumber(const vector<int> &A) {
    vector<string> str;
    int count=0;
    for(int i=0; i<A.size(); i++){
        if(A[i] == 0){
            count++;
        }
    }
    if(count == A.size()){
        return "0";
    }
    for(int i=0;i<A.size();i++)
        str.push_back(to_string(A[i]));
    sort(str.begin(),str.end(),compr);
    string S;
    for(int i=0;i<str.size();i++)
        S+=str[i];
    
    return S;
}