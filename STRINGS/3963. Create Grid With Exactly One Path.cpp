//problem link: https://leetcode.com/problems/create-grid-with-exactly-one-path/
//timeComplexity: O(n*m)
//spaceComplexity: o(n*m)

class Solution {
    public String[] createGrid(int m, int n) {
        char grid[][]=new char[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                grid[i][j]='.';
            }
        }
        if(m!=1 && n!=1){
            for(int i=1;i<m;i++){
            for(int j=0;j<n-1;j++){
                grid[i][j]='#';
            }
        }
        }
        String ans[]=new String[m];
        for(int i=0;i<m;i++){
            ans[i]=new String(grid[i]);
        }
        return ans;
    }
}