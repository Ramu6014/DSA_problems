//problem link: https://leetcode.com/problems/find-a-peak-element-ii/
//timeComplexity: o(n*log(m))
//spaceComplexity: O(1)

class Solution {
private:
    int findMaxIndx(vector<vector<int>>&mat,int n,int m,int col){
        int maxEl=-1;
        int indx=-1;
        for(int i=0;i<n;i++){
            if(mat[i][col]>maxEl){
                maxEl=mat[i][col];
                indx=i;
            }
        }
        return indx;
    }
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int low=0,high=m-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int row=findMaxIndx(mat,n,m,mid);
            int left=mid-1>=0?mat[row][mid-1]:-1;
            int right=mid+1<m?mat[row][mid+1]:-1;
            if(left<mat[row][mid] && mat[row][mid]>right){
                return {row,mid};
            }
            else if(left>mat[row][mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return {-1,-1};
    }
};