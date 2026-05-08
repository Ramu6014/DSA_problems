//problem link: https://leetcode.com/problems/rotting-oranges/
//timeComplexity: O(n*m*4)
//spaceComplexity: O(n*m)

class Solution {
private:
    void bfs(int n,int m,int &cnt,int rowArr[],int colArr[],vector<vector<int>>&grid){
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()){
            int s=q.size();
            bool flag=false;
            for(int i=0;i<s;i++){
                int row=q.front().first;
                int col=q.front().second;
                q.pop();
                //check for 4-adjacent neighbours
                for(int i=0;i<4;i++){
                    int delRow=row+rowArr[i];
                    int delCol=col+colArr[i];
                    if(delRow>=0 && delRow<n && delCol>=0 && delCol<m && grid[delRow][delCol]==1){
                        grid[delRow][delCol]=2;
                        q.push({delRow,delCol});
                        flag=true;
                    }
                }
            }
            if(flag){
                    cnt++;
                }
        }
    }
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        int rowArr[]={-1,0,1,0};
        int colArr[]={0,1,0,-1};
        bfs(n,m,cnt,rowArr,colArr,grid);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        return cnt;
    }
};