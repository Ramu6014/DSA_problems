//problem link: https://leetcode.com/problems/surrounded-regions/
//timeCompelxity: O(n*m*4)
//spaceCompelxity: o(n*m)

class Solution {
    static boolean  isValid(int drow,int dcol,int n,int m){
        return (drow>=0 && drow<n && dcol>=0 && dcol<m);
    }
    static void dfs(int row,int col,int n,int m,int newRow[],int newCol[],int vis[][],char board[][]){
        vis[row][col]=1;
        for(int i=0;i<4;i++){
            int drow=row+newRow[i];
            int dcol=col+newCol[i];
            if(isValid(drow,dcol,n,m) && board[drow][dcol]=='O' && vis[drow][dcol]==0){
                dfs(drow,dcol,n,m,newRow,newCol,vis,board);
            }
        }
    }
    public void solve(char[][] board) {
        int n=board.length;
        int m=board[0].length;
        int vis[][]=new int[n][m];
        int newRow[]={-1,0,1,0};
        int newCol[]={0,1,0,-1};
        int left=0,right=m-1;
        int top=0,bottom=n-1;
        //left to right
        for(int i=left;i<=right;i++){
            if(board[left][i]=='O' && vis[left][i]==0){
                dfs(left,i,n,m,newRow,newCol,vis,board);
            }
        }
        top++;
        //top to bottom
        for(int i=top;i<=bottom;i++){
            if(board[i][right]=='O' && vis[i][right]==0){
                dfs(i,right,n,m,newRow,newCol,vis,board);
            }
        }
        right--;
        //right to left
        for(int i=right;i>=left;i--){
            if(board[bottom][i]=='O' && vis[bottom][i]==0){
                dfs(bottom,i,n,m,newRow,newCol,vis,board);
            }
        }
        bottom--;
        //bottom to top
        for(int i=bottom;i>=top;i--){
            if(board[i][left]=='O' && vis[i][left]==0){
                dfs(i,left,n,m,newRow,newCol,vis,board);
            }
        }
        left++;
        //fill the board
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O' && vis[i][j]==0){
                    board[i][j]='X';
                }
            }
        }
        return;
    }
}