//problem link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/?envType=daily-question&envId=2026-05-15
//timeComplexity: O(logn)
//spaceComplexity: O(1)

class Solution {
public:
    int findMin(vector<int>& nums) {
       int low=0;
       int high=nums.size()-1;
       int el=INT_MAX;
       while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[low]<=nums[high]){
            el=min(el,nums[low]);
            break;
        }
        if(nums[low]<=nums[mid]){
            el=min(nums[low],el);
            low=mid+1;
        }
        else{
            el=min(nums[mid],el);
            high=mid-1;
        }
       }
       return el;
    }
};
