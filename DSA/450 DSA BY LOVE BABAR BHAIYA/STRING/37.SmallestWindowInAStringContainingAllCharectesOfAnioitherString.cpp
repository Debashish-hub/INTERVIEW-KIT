string smallestWindow (string s, string p)
    {
        int hash[256] = {0};
        int uniqueWords = 0;
        for(int i = 0; i < p.size(); i++){
            if(hash[p[i]] == 0){
                uniqueWords++;
            }
            hash[p[i]]++;
        }
        int resCount = INT_MAX;
        int resStart = 0;
        int i = 0, j = 0;
        while(j < s.size()) {
            hash[s[j]]--;
            if(hash[s[j]] == 0){
                uniqueWords--;
            }
            if(uniqueWords == 0){
                while(uniqueWords == 0){
                    if(resCount > j - i + 1){
                        resCount = min(resCount, j - i + 1);
                        resStart = i;
                    }
                    hash[s[i]]++;
                    if(hash[s[i]] > 0){
                        uniqueWords++;
                    }
                    i++;
                }
            }
            j++;
        }
        if(resCount == INT_MAX){
            return "-1";
        }
        
        return s.substr(resStart, resCount);
    }