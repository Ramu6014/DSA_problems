//problem link: https://leetcode.com/problems/split-array-largest-sum/
//timeComplexity: O(n*log(sum-max))
//spaceComplexity: O(1)

class Solution {
private:
    int isValid(vector<int>&nums,int k,int maxSum){
        int cntSub=1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=maxSum){
                sum+=nums[i];
            }
            else{
                cntSub++;
                sum=nums[i];
            }
        }
        return cntSub;
    }
private:
    vector<int> findLowHigh(vector<int>&nums){
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            sum+=nums[i];
        }
        return {maxi,sum};
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>range=findLowHigh(nums);
        int low=range[0],high=range[1];
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isValid(nums,k,mid)>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};
