//problem link: https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
//timeComplexity: O(n)+(2E)
//spaceComplexity: O(n)

class Solution {
  public:
    void dfs(int node,int vis[],vector<int>&ls,vector<vector<int>>&adj){
        vis[node]=1;
        ls.push_back(node);
        for(auto it: adj[node]){
            if(!vis[it]){
                dfs(it,vis,ls,adj);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<int>ls;
        int n=adj.size();
        int vis[n]={0};
        dfs(0,vis,ls,adj);
        return ls;
    }
};