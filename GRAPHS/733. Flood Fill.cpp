//problem link: https://leetcode.com/problems/flood-fill/description/
//timeComplexity: O(n*m*4)
//spaceComplexity: O(n*m)

class Solution {
private:
    void dfs(int row,int col,int n,int m,int color,int stColor,vector<vector<int>>&vis,vector<vector<int>>&image){
        vis[row][col]=1;
        //left
        if(col-1>=0 && vis[row][col-1]==0 && image[row][col-1]==stColor){
            image[row][col-1]=color;
            dfs(row,col-1,n,m,color,stColor,vis,image);
        }
        //right
        if(col+1<m && vis[row][col+1]==0 && image[row][col+1]==stColor){
            image[row][col+1]=color;
            dfs(row,col+1,n,m,color,stColor,vis,image);
        }
        //top
        if(row-1>=0 && vis[row-1][col]==0 && image[row-1][col]==stColor){
            image[row-1][col]=color;
            dfs(row-1,col,n,m,color,stColor,vis,image);
        }
        //bottom
        if(row+1<n && vis[row+1][col]==0 && image[row+1][col]==stColor){
            image[row+1][col]=color;
            dfs(row+1,col,n,m,color,stColor,vis,image);
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        int stColor=image[sr][sc];
        vector<vector<int>>vis(n,vector<int>(m,0));
        image[sr][sc]=color;
        dfs(sr,sc,n,m,color,stColor,vis,image);
        return image;
    }
};