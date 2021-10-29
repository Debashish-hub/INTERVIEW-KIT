int strStr(string haystack, string needle) {

    // z funtion -> pattern $ string, find the pattern in the string
    if(needle.length() == 0)
        return 0;
    string str = needle + "$" + haystack;
    
    int l=0, r=0, n=str.length();
    vector<int> z(str.length());
    for(int i=1; i<n; i++){
        if(i>r){
            l=r=i;
            while(r<n && str[r-l] == str[r])
                r++;
            z[i] = r-l;
            r--;
        }
        else if(i + z[i-l] <= r){
            z[i] = z[i-l];
        }
        else{
            l=i;
            while(r<n && str[r-l] == str[r])
                r++;
            z[i] = r-l;
            r--;
        }
    }
    
    int ans=-1;
    // If we find the pattern that means the z value at that point equals pattern
    // We will return the first position of the matched pattern - appended string that is needle length plus dollar sign
    for(int i=0; i<z.size(); i++){
        if(z[i] == needle.length()){
            ans = i - needle.length() - 1;
            break;
        }
    }
    return ans;
}