//problem link: https://leetcode.com/problems/spiral-matrix-ii/
//timeComplexity: O(n*m)
//spaceComplexity: O(n*m)

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>grid(n,vector<int>(n,0));
        int num=1;
        int top=0,bottom=n-1;
        int left=0,right=n-1;
        while(top<=bottom && left<=right){
        //left to right
        for(int i=top;i<=right;i++){
            grid[top][i]=num++;
        }
        top++;
        //top to bottom
        for(int i=top;i<=bottom;i++){
            grid[i][right]=num++;
        }
        right--;
        //right to left
        for(int i=right;i>=left;i--){
            grid[bottom][i]=num++;
        }
        bottom--;
        for(int i=bottom;i>=top;i--){
            grid[i][left]=num++;
        }

        left++;
        }
        return grid;
    }
};