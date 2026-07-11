//problem link: https://leetcode.com/problems/count-the-number-of-complete-components/
//timeComplexity: o(V+2E)
//spaceComplexity: O(V+2E)

class Solution {
private:
    void dfs(int node,vector<int>&vis,vector<vector<int>>&adj,int &nodes,int &degree){
        vis[node]=1;
        nodes++;
        degree+=adj[node].size();
        for(auto it: adj[node]){
            if(!vis[it]){
                dfs(it,vis,adj,nodes,degree);
            }
        }
    }
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<int>vis(n,0);
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
            int nodes=0;
            int degree=0;
            dfs(i,vis,adj,nodes,degree);
            int edges=degree/2;
            if(nodes*(nodes-1)/2 == edges){
                cnt++;
            }
            }
        }
        return cnt;
    }
};