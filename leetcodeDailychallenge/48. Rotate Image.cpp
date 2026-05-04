//problem link: https://leetcode.com/problems/rotate-image/description/?envType=daily-question&envId=2026-05-04
//timeComplexity: O(n*m)
//spaceComplexity: O(1)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<m;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        return;
    }
};