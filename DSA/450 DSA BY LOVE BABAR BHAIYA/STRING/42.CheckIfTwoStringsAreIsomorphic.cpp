bool areIsomorphic(string str1, string str2)
    {
        // Your code here
        if(str1.length() != str2.length()){
            return false;
        }
        int a[26] = {0}, b[26] = {0};
        for(int i=0; i<str1.length(); i++){
            a[str1[i]-'a']++;
            b[str2[i]-'a']++;
            if(a[str1[i]-'a'] != b[str2[i]-'a']){
                return false;
            }
        }
        return true;
        
    }