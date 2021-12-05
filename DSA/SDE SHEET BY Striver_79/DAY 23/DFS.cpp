bool vis[10000]={false};
    void dfs(vector<int> adj[],vector<int> &v,int i){
        if(vis[i]==false){
            vis[i]=true;
            v.push_back(i);
            for(int it:adj[i])
            {
                if(vis[it]==false){
                    dfs(adj,v,it);
                }
            }
        }
        return ;
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> v;
        dfs(adj,v,0);
        return v;
    }