//problem link: https://www.geeksforgeeks.org/problems/exit-point-in-a-matrix0905/1
//timeComplexity: o(n*m)
//spaceComplexity: o(1)

class Solution {
    public List<Integer> exitPoint(int[][] mat) {
        // code here
        int n=mat.length;
        int m=mat[0].length;
        int d=0;
        int i=0,j=0;
        while(i>=0 &&  i<n && j>=0 && j<m){
            if(mat[i][j]==1){
                mat[i][j]=0;
                d=(d+1)%4;
            }
            if(d==0){
                j++;
            }
            else if(d==1){
                i++;
            }
            else if(d==2){
                j--;
            }
            else{
                i--;
            }
        }
        if(d==0){
            j--;
        }
        else if(d==1){
            i--;
        }
        else if(d==2){
            j++;
        }
        else{
            i++;
        }
        return Arrays.asList(i, j);
    }
}