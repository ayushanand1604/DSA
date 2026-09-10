BFS GFG
class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int n = adj.size();
        vector<int> ans;
        queue<int> q;
        vector<bool> visited(n,false);
        int src = 0;
        visited[src] = true;
        q.push(src);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(int i: adj[node]){
                if(!visited[i]){
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
        return ans;
    }
};