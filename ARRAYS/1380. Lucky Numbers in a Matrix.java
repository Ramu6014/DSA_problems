//problem link: https://leetcode.com/problems/lucky-numbers-in-a-matrix/
//timeComplexity: O(n*m)
//spaceComplexity: o(n*m)

class Solution {
    public List<Integer> luckyNumbers(int[][] matrix) {
        int n=matrix.length;
        int m=matrix[0].length;
        List<Integer>ans=new ArrayList<>();
        for(int i=0;i<n;i++){
            int mini=Integer.MAX_VALUE;
            int indx=-1;
            //traverse every row
            for(int j=0;j<m;j++){
                if(matrix[i][j]<mini){
                    mini=matrix[i][j];
                    indx=j;
                }
            }
            //now traverse the col with minValue only
            boolean flag=true;
            for(int k=0;k<n;k++){
                if(matrix[k][indx]>mini){
                    flag=false;
                    break;
                }
            }
            if(flag){
                ans.add(mini);
            }
        }
        return ans;
    }
}