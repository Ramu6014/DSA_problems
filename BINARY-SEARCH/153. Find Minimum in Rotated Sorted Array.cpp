//problem link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
//timeComplexity: O(log(n))
//spaceComplexity: O(1)

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        if(nums[0]<=nums[n-1]){
            return nums[0];
        }
        int low=0,high=n-1;
        int el=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[low]<=nums[mid]){
                el=min(el,nums[low]);
                low=mid+1;
            }
            else{
                el=min(el,nums[mid]);
                high=mid-1;
            }
        }
        return el;
    }
};