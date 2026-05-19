//problem link: https://leetcode.com/problems/is-graph-bipartite/
//timeComplexity: O(V+2E)
//spaceComplexity: O(V)+O(V+2E)

class Solution {
    bool bfs(int i,vector<int>&vis,vector<vector<int>>&adj){
        vis[i]=1;
        queue<int>q;
        q.push(i);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:adj[node]){
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
    bool isBipartite(vector<vector<int>>& graph){
        int n=graph.size();
        vector<vector<int>>adj(n);
        vector<int>vis(n,-1);
        for(int i=0;i<graph.size();i++){
            for(int j=0;j<graph[i].size();j++){
                int u=graph[i][j];
            adj[i].push_back(u);
            adj[u].push_back(i);
            }
        }
        for(int i=0;i<graph.size();i++){
        if(vis[i]==-1 && bfs(i,vis,adj)==false){
            return false;
        }
        }
        return true;
    }
};