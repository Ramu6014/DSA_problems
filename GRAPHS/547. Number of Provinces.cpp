//problem link: https://leetcode.com/problems/number-of-provinces/description/
//timeComplexity: O(n^2)
//spaceComplexity: O(n)

class Solution {
public:
    void dfs(int node,vector<int>&vis,vector<vector<int>>&isConnected){
        vis[node]=1;
        for(int j=0;j<isConnected.size();j++){
            if(!vis[j+1] && isConnected[node-1][j]==1){
                dfs(j+1,vis,isConnected);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected){
        int n=isConnected.size();
        vector<int>vis(n+1,0);
        int cnt=0;
        for(int i=1;i<n+1;i++){
            if(!vis[i]){
                cnt++;
                dfs(i,vis,isConnected);
            }
        }
        return cnt;
    }
};