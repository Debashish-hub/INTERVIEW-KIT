vector<vector<string>> Anagrams(vector<string>& string_list) {
    map<string, vector<string>> mp;
    
    for(int i = 0; i < string_list.size(); i++){
        string data = string_list[i];
        sort(data.begin(), data.end());
        mp[data].push_back(string_list[i]);
    }
    
    vector<vector<string>> res;
    for(auto x: mp){
        vector<string> val;
        for(auto y: x.second){
            val.push_back(y);
        }
        res.push_back(val);
    }
    
    return res;
}