const int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
   const int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

   bool search(vector<vector<char>> &grid, string &word, int i, int j, int n, int m) {
       if (grid[i][j] != word[0]) return false;
       for (int dir = 0; dir < 8; dir++) {
           int x = i + dx[dir], y = j + dy[dir];
           int index;
           for (index = 1; index < word.size(); index++) {
               if (x < 0 || y < 0 || x >= n || y >= m || grid[x][y] != word[index]) break;
               x += dx[dir];
               y += dy[dir];
           }
           if (index == word.size()) return true;
       }
       return false;
   }

	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    // Code here
	   vector<vector<int>> ans;
       int n = grid.size();
       int m = grid[0].size();
       for (int i = 0; i < n; i++) {
           for (int j = 0; j < m; j++) {
               if (search(grid, word, i, j, n, m)) ans.push_back({i, j});
           }
       }
       return ans;
	}