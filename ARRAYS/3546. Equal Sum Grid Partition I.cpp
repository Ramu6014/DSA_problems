//problem Link: https://leetcode.com/problems/equal-sum-grid-partition-i/?envType=daily-question&envId=2026-03-25
//TimeComplexity: 3*O(n*m)
//SpaceComplexity: O(1)
class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        long long totalSum=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                totalSum+=grid[i][j];
            }
        }
        //row
        long long rowSum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                rowSum+=grid[i][j];
            }
            long long remaining=totalSum-rowSum;
            if(remaining==rowSum){
                return true;
            }
        }
        //col
        long long colSum=0;
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                colSum+=grid[i][j];
            }
            long long remaining=totalSum-colSum;
            if(remaining==colSum){
                return true;
            }
        }
        return false;
    }
};