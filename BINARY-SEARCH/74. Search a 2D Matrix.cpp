//problem link: https://leetcode.com/problems/search-a-2d-matrix/
//timeComplexity: o(n*log(m))
//spaceComplexity: O(1)

class Solution {
private:
    bool binarySearch(vector<int>nums,int target){
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                return true;
            }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            if(target>=matrix[i][0] && target<=matrix[i][m-1]){
                return binarySearch(matrix[i],target);
            }
        }
        return false;
    }
};