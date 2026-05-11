//problem link: https://leetcode.com/problems/map-of-highest-peak/
//timeComplexity: O(n)+O(n*m*4)
//spaceCompelxity: O(n)+2*(n*m)

class Solution {
bool isValid(int drow,int dcol,int n,int m){
    return (drow>=0 && drow<n && dcol>=0 && dcol<m);
}
private:
    void bfs(int n,int m,int newRow[],int newCol[],vector<vector<int>>&vis,vector<vector<int>>&height,vector<vector<int>>&isWater){
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(isWater[i][j]==1){
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
            height[row][col]=cnt;
        }
        return;
    }
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int n=isWater.size();
        int m=isWater[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>height(n,vector<int>(m,-1));
        int newRow[]={-1,0,1,0};
        int newCol[]={0,1,0,-1};
        bfs(n,m,newRow,newCol,vis,height,isWater);
        return height;
    }
};