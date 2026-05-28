//problem link: https://www.geeksforgeeks.org/problems/boundary-traversal-of-matrix-1587115620/1
//timeComplexity: o(n*m)
//spaceComplexity: O(n*m)

class Solution {
    public ArrayList<Integer> boundaryTraversal(int mat[][]) {
        // code here
        int n=mat.length;
        int m=mat[0].length;
        ArrayList<Integer>ans=new ArrayList<>();
        int top=0,bottom=n-1;
        int left=0,right=m-1;
        //left to right
        for(int i=left;i<=right;i++){
            ans.add(mat[top][i]);
        }
        top++;
        //top to bottom
        for(int i=top;i<=bottom;i++){
            ans.add(mat[i][right]);
        }
        right--;
        if(top<=bottom){
        //right to left
        for(int i=right;i>=left;i--){
            ans.add(mat[bottom][i]);
        }
        }
        bottom--;
        //bottom to top
        if(left<=right){
        for(int i=bottom;i>=top;i--){
            ans.add(mat[i][left]);
        }
        }
        left++;
        return ans;
    }
}
