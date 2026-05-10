//problem link: https://leetcode.com/problems/cyclically-rotating-a-grid/?envType=daily-question&envId=2026-05-10
//timeComplexity: O(n*m)
//spaceComplexity: O(n*m)


class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        int left=0;
        int right=m-1;
        int top=0;
        int bottom=n-1;
        while(top<bottom && left<right){
            vector<int>arr;
            //left to right
            for(int i=top;i<=right;i++){
                arr.push_back(grid[top][i]);
            }
            top++;
            //top to bottom
            for(int i=top;i<=bottom;i++){
                arr.push_back(grid[i][right]);
            }
            right--;
            //right to  left
            for(int i=right;i>=left;i--){
                arr.push_back(grid[bottom][i]);
            }
            bottom--;
            //bottom to top
            for(int i=bottom;i>=top;i--){
                arr.push_back(grid[i][left]);
            }
            left++;
            int arrSize=arr.size();
            int rotations=k%arrSize;
            reverse(arr.begin()+rotations,arr.end());
            reverse(arr.begin(),arr.begin()+rotations);
            reverse(arr.begin(),arr.end());
            top--,left--;
            bottom++,right++;
            int indx=0;
            //left to right
            for(int i=top;i<=right;i++){
                grid[top][i]=arr[indx++];
            }
            top++;
            //top to bottom 
            for(int i=top;i<=bottom;i++){
                grid[i][right]=arr[indx++];
            }
            right--;
            //right to left
            for(int i=right;i>=left;i--){
                grid[bottom][i]=arr[indx++];
            }
            bottom--;
            for(int i=bottom;i>=top;i--){
                grid[i][left]=arr[indx++];
            }
            left++;
        }
        return grid;
    }
};