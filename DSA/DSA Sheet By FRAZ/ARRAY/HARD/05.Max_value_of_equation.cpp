class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        int ans = INT_MIN;
        deque<pair<int, int>> q;
        for (auto it : points) {
            int x = it[0], y = it[1];
            while (q.size() && x - q.front().second > k) 
                q.pop_front();
            if (q.size()) 
                ans = max(ans, q.front().first + x + y);
            while (q.size() && q.back().first <= y - x) 
                q.pop_back();
            q.emplace_back(y - x, x);
          }
          return ans;
    }
};


