class Solution {
public:
    bool solve(vector<vector<int>> & graph, vector<int> &color, int curr){
        for(auto it : graph[curr]){
            if(color[it] == color[curr]){
                return false;
            }else if(color[it] == -1){
                color[it] = 1 - color[curr];
                if(!solve(graph,color,it)){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, -1);
        for(int i=0;i<n;i++){
            if(color[i] == -1) {
                color[i] = 0;
                if(!solve(graph,color,i))
                    return false;
            }
        }
        return true;
    }
};