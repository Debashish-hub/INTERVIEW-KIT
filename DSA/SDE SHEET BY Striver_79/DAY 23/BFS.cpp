vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        vector<bool> visited(V);
        queue<int> q;
        q.push(0);
        while(!q.empty()) {
            int u = q.front();
            q.pop();
            visited[u] = true;
            ans.push_back(u);
            for(auto v:adj[u]) {
                if(!visited[v]) {
                    q.push(v);
                    visited[v] = true;
                }
            }
        }
        return ans;
    }