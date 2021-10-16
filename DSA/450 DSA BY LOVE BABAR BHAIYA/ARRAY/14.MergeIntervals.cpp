    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> result;
        
        for (int i = 0 ; i < intervals.size(); ++i)
        {
            if (result.size() > 0 && (result[result.size() - 1][1] >= intervals[i][0]) ) 
                result[result.size() - 1][1] = max(result[result.size() - 1][1], intervals[i][1]); 
            else
                result.push_back(intervals[i]);
        }
        
        return result;
    }