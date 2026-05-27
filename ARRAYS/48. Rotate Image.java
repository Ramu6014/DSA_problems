//problem link: https://leetcode.com/problems/rotate-image/
//timeComplexity: O(n*m)
//spaceComplexity: O(1)

class Solution {
    public void reverse(int arr[],int st,int end){
        while(st<end){
            int temp=arr[st];
            arr[st]=arr[end];
            arr[end]=temp;
            st++;
            end--;
        }
        return;
    }
    public void rotate(int[][] matrix) {
        int n=matrix.length;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        //reverse
        for(int i=0;i<n;i++){
            reverse(matrix[i],0,matrix[i].length-1);
        }
        return;
    }
}