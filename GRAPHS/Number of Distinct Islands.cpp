//problem link: https://www.geeksforgeeks.org/problems/number-of-distinct-islands/1
//timeComplexity: O(n*m*4)
//spaceComplexity: O(n*m)

// User function Template for C++

class Solution {
  private:
  bool isValid(int drow,int dcol,int n,int m){
      return (drow>=0 && drow<n && dcol>=0 && dcol<m);
  }
  private:
  void bfs(int i,int j,int n,int m,int newRow[],int newCol[],vector<vector<int>>&vis,vector<vector<int>>&grid,set<vector<pair<int,int>>>&st){
      vis[i][j]=1;
      queue<pair<int,int>>q;
      q.push({i,j});
      vector<pair<int,int>>temp;
      while(!q.empty()){
          int row=q.front().first;
          int col=q.front().second;
          temp.push_back({0,0});
          q.pop();
          for(int i=0;i<4;i++){
              int drow=row+newRow[i];
              int dcol=col+newCol[i];
              if(isValid(drow,dcol,n,m) && grid[drow][dcol]==1 && vis[drow][dcol]==0){
                  vis[drow][dcol]=1;
                  q.push({drow,dcol});
                  temp.push_back({drow-row,dcol-col});
              }
          }
      }
      st.insert(temp);
  }
  public:
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        set<vector<pair<int,int>>>st;
        int newRow[]={-1,0,1,0};
        int newCol[]={0,1,0,-1};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && vis[i][j]==0){
                    bfs(i,j,n,m,newRow,newCol,vis,grid,st);
                }
            }
        }
        return st.size();
    }
};
