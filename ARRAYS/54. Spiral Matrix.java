//problem link: https://leetcode.com/problems/spiral-matrix/
//timeComplexity: O(n*m)
//spaceComplexity: o(n*m)

class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        int n=matrix.length;
        int m=matrix[0].length;
        List<Integer>ans=new ArrayList<>();
        int left=0,right=m-1;
        int top=0,bottom=n-1;
        while(top<=bottom && left<=right){
        //left to right
        for(int i=left;i<=right;i++){
            ans.add(matrix[top][i]);
        }
        top++;
        if(bottom<top){
            break;
        }
        //top to bottom
        for(int i=top;i<=bottom;i++){
            ans.add(matrix[i][right]);
        }
        right--;
        
        //right to left
        for(int i=right;i>=left;i--){
            ans.add(matrix[bottom][i]);
        }
        bottom--;
        //bottom to top
        if(right<left){
            break;
        }
        for(int i=bottom;i>=top;i--){
            ans.add(matrix[i][left]);
        }
        left++;
    }
    return ans;
    }
}