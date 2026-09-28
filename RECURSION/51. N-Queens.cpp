//problem link: https://leetcode.com/problems/n-queens/
//timeComplexity: o(n!)
//spaceComplexity: O(n)

class Solution {
    void func(int row,vector<int>&colVis,vector<int>&upperDiagonal,vector<int>&lowerDiagonal,int n,vector<string>&board,vector<vector<string>>&ans){
        if(row==n){
            ans.push_back(board);
            return;
        }
        for(int col=0;col<n;col++){
            if(colVis[col]==0 && upperDiagonal[n-1+col-row]==0 && lowerDiagonal[row+col]==0){
                board[row][col]='Q';
                colVis[col]=1;
                upperDiagonal[n-1+col-row]=1;
                lowerDiagonal[row+col]=1;
                func(row+1,colVis,upperDiagonal,lowerDiagonal,n,board,ans);
                board[row][col]='.';
                colVis[col]=0;
                upperDiagonal[n-1+col-row]=0;
                lowerDiagonal[row+col]=0;
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        vector<int>colVis(n,0);
        vector<int>upperDiagonal(2*n-1,0);
        vector<int>lowerDiagonal(2*n-1,0);
        func(0,colVis,upperDiagonal,lowerDiagonal,n,board,ans);
        return ans;
    }
};