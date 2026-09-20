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

DFS GFG
class Solution {
  public:
    void dfsRecursion(vector<vector<int>>& adj,int src,vector<bool> &visited,vector<int> &ans){
        visited[src]=true;
        ans.push_back(src);
        for(int i:adj[src]){
            if(visited[i]==false){
                dfsRecursion(adj,i,visited,ans);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n = adj.size();
        vector <bool> visited(n,false);
        vector<int>ans;
        dfsRecursion(adj,0,visited,ans);
        return ans;
    }
};