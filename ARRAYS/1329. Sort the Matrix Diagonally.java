//problem link: https://leetcode.com/problems/sort-the-matrix-diagonally/
//timeComplexity:  O(n * m * log(min(n,m)))
//spaceComplexity: O(min(n,m))

class Solution {
    public int[][] diagonalSort(int[][] mat) {
        int n=mat.length;
        int m=mat[0].length;
        for(int i=0;i<n+m-1;i++){
            int row=(i<m)?0:i-m+1;
            int col=(i<m)?m-i-1:0;
            int tempRow=row;
            int tempCol=col;
            ArrayList<Integer>temp=new ArrayList<>();
            while(row<n && col<m){
                temp.add(mat[row][col]);
                row++;
                col++;
            }
            Collections.sort(temp);
            int indx=0;
            while(tempRow<n && tempCol<m){
                mat[tempRow][tempCol]=temp.get(indx);
                indx++;
                tempRow++;
                tempCol++;
            }
        }
        return mat;
    }
}