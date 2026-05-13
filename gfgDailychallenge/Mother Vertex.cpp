//problem link: https://www.geeksforgeeks.org/problems/mother-vertex/1
//timeComplexity: o(V+2E)
//spaceComplexity: O(V+2E)

class Solution {
  private:
    void dfs(int node,vector<int>&vis,vector<vector<int>>&adj){
        vis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,vis,adj);
            }
        }
    }
  public:
    int findMotherVertex(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>>adj(V);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
        }
        int indx=-1;
        vector<int>vis(V,0);
        for(int i=0;i<V;i++){
            
            if(!vis[i]){
            dfs(i,vis,adj);
            indx=i;
            }
        }
        fill(vis.begin(),vis.end(),0);
        dfs(indx,vis,adj);
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                return -1;
            }
        }
        return indx;
    }
};