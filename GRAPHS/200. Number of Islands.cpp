//problem link: https://leetcode.com/problems/number-of-islands/description/
//timeComplexity: O(n*m*4)
//spaceComplexity: O(n*m)

class Solution {
private:
    void dfs(int row,int col,int n,int m,vector<vector<int>>&vis,vector<vector<char>>&grid){
        vis[row][col]=1;
        //left
        if(col-1>=0 && grid[row][col-1]=='1' && vis[row][col-1]==0){
            dfs(row,col-1,n,m,vis,grid);
        }
        //right
        if(col+1<m && grid[row][col+1]=='1' && vis[row][col+1]==0){
            dfs(row,col+1,n,m,vis,grid);
        }
        //top
        if(row-1>=0 && grid[row-1][col]=='1' &&  vis[row-1][col]==0){
            dfs(row-1,col,n,m,vis,grid);
        }
        //bottom
        if(row+1<n && grid[row+1][col]=='1' &&  vis[row+1][col]==0){
            dfs(row+1,col,n,m,vis,grid);
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    dfs(i,j,n,m,vis,grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};