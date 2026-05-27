//problem link: https://leetcode.com/problems/transpose-matrix/
//timeComplexity: o(n*m)
//spaceComplexity: O(n*m)

class Solution {
    public int[][] transpose(int[][] matrix) {
        int n=matrix.length;
        int m=matrix[0].length;
        int ans[][]=new int[m][n];
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                ans[j][i]=matrix[i][j];
            }
        }
        return ans;
    }
}