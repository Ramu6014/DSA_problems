//problem Link: https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/?envType=daily-question&envId=2026-03-22
//TimeComplexity: O(n^2)
//spaceComplexity: O(1)
class Solution {
public:
    bool isValid(vector<vector<int>>&mat,vector<vector<int>>&target){
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]!=target[i][j]){
                    return false;
                }
            }
        }
        return true;
    }
    void reverseFunc(vector<vector<int>>&mat){
        int n=mat.size();
        for(int i=0;i<n;i++){
            reverse(mat[i].begin(),mat[i].end());
        }
        return;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<4;i++){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<m;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        reverseFunc(mat);
        if(isValid(mat,target)){
            return true;
        }
        }
        return false;
    }
};