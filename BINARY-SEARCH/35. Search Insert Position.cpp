//problem link: https://leetcode.com/problems/search-insert-position/
//timeComplexity: o(log(n))
//spaceComplexity: o(1)

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        int ansIndx=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                ansIndx=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ansIndx;
    }
};