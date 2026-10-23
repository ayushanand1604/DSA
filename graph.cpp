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

733. Flood Fill leetcode 
class Solution {
public:
    void dfs(vector<vector<int>>& image,int i,int j,int newColor,int originalColor){
        if(i<0 || j<0 || i>=image.size() || j >=image[0].size() || 
        image[i][j]==newColor || image[i][j] != originalColor){
            return;
        }    
        image[i][j] = newColor;
        dfs(image,i+1,j,newColor,originalColor);
        dfs(image,i-1,j,newColor,originalColor);
        dfs(image,i,j-1,newColor,originalColor);
        dfs(image,i,j+1,newColor,originalColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        dfs(image,sr,sc,color,image[sr][sc]);
        return image;
    }
};

Topological Sort GFG
class Solution {
  public:
    void dfs(int node,stack <int> &st,vector<vector<int>>& adj,int visited[]){
        visited[node] = 1;
        for(auto it: adj[node]){
            if(!visited[it]){
                dfs(it,st,adj,visited);
            }
        }
        st.push(node);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        for(int i = 0;i < edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
        }
        int visited[V] = {0};
        stack<int> st;
        for(int i = 0;i < V;i++){
            if(!visited[i]){
                dfs(i,st,adj,visited);
            }
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};

Distance of Nearest 1 in Grid GFG
class Solution {
  public:
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        // code here
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        vector<vector<int>> dist(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        for(int i = 0; i < n; i++){
            for(int j = 0 ; j < m; j++){
                if(grid[i][j]==1){
                    q.push({{i,j},0});
                    vis[i][j] = 1;
                }
                else vis[i][j] = 0;
            }
        }
        int delrow[] = {-1,0,+1,0};
        int delcol[] = {0,+1,0,-1};
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int steps = q.front().second;
            q.pop();
            dist[row][col] = steps;
            for(int i = 0;i < 4;i++){
                int nrow = row+delrow[i];
                int ncol = col+delcol[i];
                if(nrow >=0 && nrow < n && ncol >=0 && ncol < m && vis[nrow][ncol]==0){
                    vis[nrow][ncol]=1;
                    q.push({{nrow,ncol},steps+1});
                }
            }
        }
        return dist;
    }
};   

542. 01 Matrix leetcode
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        vector<vector<int>> dist(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        for(int i = 0; i < n; i++){
            for(int j = 0 ; j < m; j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    vis[i][j] = 1;
                }
                else vis[i][j] = 0;
            }
        }
        int delrow[] = {-1,0,+1,0};
        int delcol[] = {0,+1,0,-1};
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int steps = q.front().second;
            q.pop();
            dist[row][col] = steps;
            for(int i = 0;i < 4;i++){
                int nrow = row+delrow[i];
                int ncol = col+delcol[i];
                if(nrow >=0 && nrow < n && ncol >=0 && ncol < m && vis[nrow][ncol]==0){
                    vis[nrow][ncol]=1;
                    q.push({{nrow,ncol},steps+1});
                }
            }
        }
        return dist;
    }
};

Undirected Graph Cycle GFG
class Solution {
  public:
    bool dfs(int node,int parent,vector<int> &visited,vector<vector<int>>& adj){
        visited[node] = 1;
        for(auto it : adj[node]){
            if(!visited[it]) {
                if(dfs(it,node,visited,adj)) return true;
            }
            else if(it!= parent) return true;
        }
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>>adj(V);
        for (auto &e : edges){
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>visited(V,0);
        for(int i = 0;i < V;i++){
            if(!visited[i]){
                if(dfs(i,-1,visited,adj)) return true;
            }
        }
        return false;
    }
};