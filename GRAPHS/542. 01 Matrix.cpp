//problem link: https://leetcode.com/problems/01-matrix/
//timeComplexity: O(n*m*4)
//spaceComplexity: O(n*m)

class Solution {
private:
    bool isValid(int drow,int dcol,int n,int m){
        return (drow>=0 && drow<n && dcol>=0 && dcol<m);
    }
private:
    void bfs(int n,int m,int newRow[],int newCol[],vector<vector<int>>&vis,vector<vector<int>>&ans,vector<vector<int>>&mat){
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int cnt=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int drow=row+newRow[i];
                int dcol=col+newCol[i];
                if(isValid(drow,dcol,n,m) && vis[drow][dcol]==0){
                    vis[drow][dcol]=1;
                    q.push({{drow,dcol},cnt+1});
                }
            }
            ans[row][col]=cnt;
        }
        return;
    }
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>ans(n,vector<int>(m,-1));
        int newRow[]={-1,0,1,0};
        int newCol[]={0,1,0,-1};
        bfs(n,m,newRow,newCol,vis,ans,mat);
        return ans;
    }
};