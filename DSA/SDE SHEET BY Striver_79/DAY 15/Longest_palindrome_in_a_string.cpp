class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() < 2){
            return s;
        }
        int ans = 1;
        int start = 0, end = 0, len = s.length();
        //odd case
        for(int i=0; i<len-1; i++){
            int l = i, r = i;
            while(l >= 0 && r < len){
                if(s[l] == s[r]){
                    l--; r++;
                }else{
                    break;
                }
            }
            if(r-l-1 > ans){
                ans = r-l-1;
                start = l+1;
                end = r-1;
            }
        }
        
        //even case
        for(int i=0; i<len-1; i++){
            int l = i, r = i+1;
            while(l >= 0 && r < len){
                if(s[l] == s[r]){
                    l--; r++;
                }else{
                    break;
                }
            }
            if(r-l-1 > ans){
                ans = r-l-1;
                start = l+1;
                end = r-1;
            }
        }
        return s.substr(start, ans);
    }
};