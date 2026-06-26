//problem link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
//timeComplexity:  O(log(n))
//spaceComplexity: O(1)

class Solution {
private:
    int findFirstIndx(vector<int>&nums,int target){
        int n=nums.size();
        int low=0,high=n-1;
        int indx=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                indx=mid;
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return indx;
    }
    private:
    int findLastIndx(vector<int>&nums,int target){
        int n=nums.size();
        int low=0,high=n-1;
        int indx=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                indx=mid;
                low=mid+1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return indx;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=-1,last=-1;
        if(n==0){
            return {first,last};
        }
        first=findFirstIndx(nums,target);
        last=findLastIndx(nums,target);
        return {first,last};
    }
};