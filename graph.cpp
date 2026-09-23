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


841. Keys and Rooms leetcode
class Solution {
public:
    void dfs(vector<vector<int>>& rooms, vector<bool> &visited, int current){
        visited[current] = 1;
        for(int i = 0;i < rooms[current].size();i++){
            if(!visited[rooms[current][i]]){
                dfs(rooms,visited,rooms[current][i]);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n,0);
        dfs(rooms,visited,0);
        for(int i = 0 ;i < n;i++){
            if(visited[i]==0) return false;
        }
        return true;
    }
};