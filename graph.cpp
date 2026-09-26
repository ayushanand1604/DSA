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

1791. Find Center of Star Graph leetcode 
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = 0;
        int ans = 0;
        for(int i = 0;i < edges.size();i++){
            n = max(n,max(edges[i][0],edges[i][1]));
        }
        vector<int>indegree(n+1);
        for(int i = 0;i < edges.size();i++){
            indegree[edges[i][0]]++;
            indegree[edges[i][1]]++;
        }
        for(int i = 0;i <indegree.size();i++){
            if(indegree[i]==n-1){
                ans = i;
                break;
            }
        }
        return ans;
    }
};


1971. Find if Path Exists in Graph
class Solution {
public:
    bool dfs(vector<vector<int>> &graph,vector<int> &visited,int current,int end){
        if(current==end) return true;
        visited[current] = 1;
        for(int i = 0;i < graph[current].size();i++){
            if(!visited[graph[current][i]]){
                if(dfs(graph,visited,graph[current][i],end)) return true;
            }    
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);
        vector<int> visited(n,0);
        for(int i =0;i<edges.size();i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }    
        return dfs(graph,visited,source,destination);
    }
};