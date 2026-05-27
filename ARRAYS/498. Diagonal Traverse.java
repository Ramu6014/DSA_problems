//problem link: https://leetcode.com/problems/diagonal-traverse/
//timeComplexity: o(n*m)
//spaceComplexity: O(n*m)

class Solution {
    public void reverse(ArrayList<Integer>temp){
        int i=0;
        int j=temp.size()-1;
        while(i<j){
            int a=temp.get(i);
            temp.set(i,temp.get(j));
            temp.set(j,a);
            i++;
            j--;
        }
        return;
    }
    public int[] findDiagonalOrder(int[][] mat) {
        int n=mat.length;
        int m=mat[0].length;
        ArrayList<Integer>ans=new ArrayList<>();
        for(int i=0;i<m+n-1;i++){
            ArrayList<Integer>temp=new ArrayList<>();
            int row=(i<m)?0:i-m+1;
            int col=(i<m)?i:m-1;
            while(row<n && col>=0){
                temp.add(mat[row][col]);
                row++;
                col--;
            }
            if(i%2==0){
                reverse(temp);
            }
            for(int j=0;j<temp.size();j++){
                ans.add(temp.get(j));
            }
        }
        int res[]=new int[ans.size()];
        for(int i=0;i<ans.size();i++){
            res[i]=ans.get(i);
        }
        return res;
    }
}