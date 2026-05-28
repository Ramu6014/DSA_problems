//problem link: https://www.geeksforgeeks.org/problems/boolean-matrix-problem-1587115620/1
//timeComplexity: O(n*m)
//spaceComplexity: O(n+m)

class Solution {
    void booleanMatrix(int mat[][]) {
        // code here
        int n=mat.length;
        int m=mat[0].length;
        int row[]=new int[n];
        int col[]=new int[m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        //perform 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i]==1||col[j]==1){
                    mat[i][j]=1;
                }
            }
        }
        return;
    }
}