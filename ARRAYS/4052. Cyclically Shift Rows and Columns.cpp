//problem link: https://leetcode.com/problems/cyclically-shift-rows-and-columns/
//timeComplexity: O(n^2)
//spaceComplexity: O(n)

class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        for(int i=0;i<rowShift.size();i++){
            if(rowShift[i]!=0){
                reverse(grid[i].begin(),grid[i].begin()+rowShift[i]);
                reverse(grid[i].begin()+rowShift[i],grid[i].end());
                reverse(grid[i].begin(),grid[i].end());
            }
        }
        for(int j=0;j<colShift.size();j++){
            if(colShift[j]!=0){
                vector<int>temp;
                for(int i=0;i<n;i++){
                    temp.push_back(grid[i][j]);
                }
                reverse(temp.begin(),temp.begin()+colShift[j]);
                reverse(temp.begin()+colShift[j],temp.end());
                reverse(temp.begin(),temp.end());
                for(int i=0;i<n;i++){
                    grid[i][j]=temp[i];
                }
            }
        }
        return grid;
    }
};