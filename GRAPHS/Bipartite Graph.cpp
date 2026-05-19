//problem link: https://www.geeksforgeeks.org/problems/bipartite-graph/1
//timeComplexity: O(V+2E)
//spaceComplexity: O(V+2E)

class Solution {
  bool bfs(int i,int vis[],vector<vector<int>>&adj){
      vis[i]=1;
      queue<int>q;
      q.push(i);
      while(!q.empty()){
          int node=q.front();
          q.pop();
          for(auto it: adj[node]){
              if(vis[it]==-1){
                  vis[it]=1-vis[node];
                  q.push(it);
              }
              else if(vis[it]==vis[node]){
                  return false;
              }
          }
      }
      return true;
  }
  public:
    bool isBipartite(int V, vector<vector<int>> &edges) {
        // Code here
        int vis[V];
        for(int i=0;i<V;i++){
            vis[i]=-1;
        }
        vector<vector<int>>adj(V);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
       return bfs(0,vis,adj);
    }
};