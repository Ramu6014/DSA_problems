//problem link: https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1
//timeComplexity: O(n*m*8)
//spaceComplexity: O(n*m)

class Solution {
  private:
    bool isValid(int drow,int dcol,int n,int m){
        return (drow>=0 && drow<n && dcol>=0 && dcol<m);
    }
  private:
    void dfs(int row,int col,int n,int m,int newRow[],int newCol[],vector<vector<int>>&vis,vector<vector<char>>&grid){
        vis[row][col]=1;
        for(int i=0;i<8;i++){
            int drow=row+newRow[i];
            int dcol=col+newCol[i];
            if(isValid(drow,dcol,n,m) && grid[drow][dcol]=='L' && vis[drow][dcol]==0){
                dfs(drow,dcol,n,m,newRow,newCol,vis,grid);
            }
        }
    }
  public:
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int  newRow[]={-1,-1,-1,0,0,1,1,1};
        int newCol[]={-1,0,1,-1,1,-1,0,1};
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && grid[i][j]=='L'){
                    dfs(i,j,n,m,newRow,newCol,vis,grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};