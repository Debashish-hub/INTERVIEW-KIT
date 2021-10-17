//Longest Substring without repeat  	
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mp(256, -1);

        int left = 0;
        int right = 0;

        int res = 0;
        while (right < s.length()) {
            if(mp[s[right]] != -1){
                left = max(mp[s[right]] +1, left);
            }
            mp[s[right]] = right;
            res = max(res, right - left + 1);

            right++;
        }

        return res;
    }
};