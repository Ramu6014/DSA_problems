//problem link: https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
//timeComplexity: O(n)+O(n+2E)
//spaceComplexity: O(n)

class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        vector<int>ans;
        int n=adj.size();
        int vis[n]={0};
        queue<int>q;
        vis[0]=1;
        q.push(0);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto it: adj[node]){
                if(!vis[it]){
                    q.push(it);
                    vis[it]=1;
                }
            }
        }
        return ans;
    }
};