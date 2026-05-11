//problem link: https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
//timeComplexity: O(V+2E)
//spaceComplexity: O(V+2E)

class Solution {
  private:
    bool bfs(int node,int parent,int vis[],vector<vector<int>>&adj){
        vis[node]=1;
        queue<pair<int,int>>q;
        q.push({node,parent});
        while(!q.empty()){
            int nodeVal=q.front().first;
            int parentVal=q.front().second;
            q.pop();
            int size=adj[nodeVal].size();
            if(size==0){
                return false;
            }
            for(auto it:adj[nodeVal]){
                if(it!=parentVal && vis[it]==0){
                    vis[it]=1;
                    q.push({it,nodeVal});
                }
                else if(it!=parentVal && vis[it]==1){
                    return true;
                }
            }
        }
        return false;
    }
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>>adj(V);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int vis[V]={0};
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(bfs(i,-1,vis,adj)){
                    return true;
                }
            }
        }
        return false;
    }
};