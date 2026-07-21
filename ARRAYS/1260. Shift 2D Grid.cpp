//problem link: https://leetcode.com/problems/shift-2d-grid/?envType=daily-question&envId=2026-07-20
//timeComplexity: o(n*m)
//spaceComplexity: o(1)

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int>temp;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                temp.push_back(grid[i][j]);
            }
        }
        int n=temp.size();
        k=k%n;
        reverse(temp.begin(),temp.begin()+(n-k));
        reverse(temp.begin()+(n-k),temp.end());
        reverse(temp.begin(),temp.end());
        int indx=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                grid[i][j]=temp[indx++];
            }
        }
        return grid;
    }
};
