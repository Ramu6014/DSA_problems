//problem link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int k=-1;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                k=i;
                break;
            }
        }
        if(k==-1){
            return true;
        }
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                return false;
            }
        }
        return true;
    }
};