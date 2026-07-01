//problem link: https://leetcode.com/problems/find-peak-element/
//timeComplexity: o(log(n))
//spaceComplexity: o(1)

class Solution {
private:
    int binarySearch(vector<int>&nums){
        int n=nums.size();
        if(nums[0]>nums[1]){
            return 0;
        }
        if(nums[n-1]>nums[n-2]){
            return n-1;
        }
        int low=1,high=n-2;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
           else if(nums[mid]>nums[mid-1]){
            low=mid+1;
           }
           else{
            high=mid-1;
           }
        }
        return -1;
    }
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return 0;
        }
        return binarySearch(nums);
    }
};