//problem link: https://www.geeksforgeeks.org/problems/connected-components-in-an-undirected-graph/1
//timeComplexity: O(V+2E)
//spaceComplexity: O(V+2E)

class Solution {
  public:
    void dfs(int node,int vis[],vector<vector<int>>&adj,vector<int>&temp){
        vis[node]=1;
        temp.push_back(node);
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,vis,adj,temp);
            }
        }
    }
    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        // code here
       vector<vector<int>>res;
        int n=edges.size();
        int m=edges[0].size();
        vector<vector<int>> adj(V);
        for(int i=0;i<n;i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
            }
        int vis[V]={0};
        int cnt=0;
        for(int i=0;i<V;i++){
             vector<int>temp;
            if(!vis[i]){
                dfs(i,vis,adj,temp);
                res.push_back(temp);
            }
        }
        return res;
        }
};
